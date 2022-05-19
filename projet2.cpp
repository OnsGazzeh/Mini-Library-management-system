#include<stdio.h>
#include<string.h>
main() {
char s[20];
char ch[20];
char livre[7][20]= {"naruto tome1,10dt", "blanc autour,66dt", 
"les miserables,17dt","dog man,18dt", 
"sans famille,17dt", "harry potter,33dt",
"apromised land,58dt"};
int i,d,resultat,j,k;  
printf("donner le titre de livre \n");
gets(s);
d=0;
	for(i=0;i<7;i++)
{strncpy(ch,livre[i],(strlen (s)));
resultat=strcmp(ch,s) ;
if (resultat==0)
{d=1;
j=i;
}
}
if (d==1)
printf("ce livre existe dans la bibliotheque : %s \n",livre[j]);
else 
printf("ce livre n'existe pas  dans la bibliotheque");
}
