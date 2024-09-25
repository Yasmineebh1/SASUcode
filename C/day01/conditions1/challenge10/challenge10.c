#include<stdio.h>

int main(){
      //char format1 = "mm/dd/yyyy"
   int mois,jour,annee,mois1,format;
   printf("entrer la date en format jj/mm/aaaa ");
   scanf("%d/%d/%d",&jour,&mois,&annee);
   
   switch (mois){
   case 1:
    printf("%d-janvier-%d",jour,annee);
    break;
    case 2:
    printf("%d-fevrier-%d",jour,annee);
    break;
    case 3:
    printf("%d-mars-%d",jour,annee);
    break;
    case 4:
    printf("%d-april-%d",jour,annee);
    break;
    case 5:
    printf("%d-mai-%d",jour,annee);
    break;
    case 6:
    printf("%d-juin-%d",jour,annee);
    break;
    case 7:
    printf("%d-juiellet-%d",jour,annee);
    break;
    case 8:
    printf("%d-august-%d",jour,annee);
    break;
    case 9:
    printf("%d-septembre-%d",jour,annee);
    break;
    case 10:
    printf("%d-octobre-%d",jour,annee);
    break;
    case 11:
    printf("%d-novembre-%d",jour,annee);
    break;
    case 12:
    printf("%d-decembre-%d",jour,annee);
    break;
    default:
    printf("entrer a cette format: jj-mm-aaaa");
   }
}