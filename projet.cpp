#include<stdio.h>
#include<string.h>
main() {
char s[20];
char livre[7][20]= {"educated", "becoming", "les miserables","dog man", "sans famille", "harry potter","apromised land"};
int i,d,resultat,j;  
printf("donner le titre de livre \n");
gets(s);
d=0;
	for(i=0;i<7;i++)
{
resultat=strcmp (livre[i],s) ;
if (resultat==0)
{d=1;
j=i;
}
}
if (d==1){

printf("ce livre existe dans la bibliotheque \n");
switch(j)
{ case 0:printf("et son  prix  est 50dt");
    break;
  case 1:printf(" et son  prix  est 49dt\n");
     break;
  case 2:printf(" et son prix  est 17dt");
  	 break;
  case 3:printf("et son  prix  est 18dt");
     break;
  case 4:printf("et son  prix  est 16dt");
     break;
  case 5:printf("et son  prix  est 33dt");
     break;
  case 6:printf("et son  prix  est 20dt");
     break;
}
}
else 
printf("ce livre n'existe pas  dans la bibliotheque");
}
