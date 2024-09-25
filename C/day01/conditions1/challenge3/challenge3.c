#include<stdio.h>
#include<math.h>

int main(){
     int a, b, somme, triple;
     printf("entrer la 1er valeur: ");
     scanf("%d",&a);
     printf("entrer la 2eme valeur: ");
     scanf("%d",&b);

     
     somme = a + b;
     if(a == b){
        triple = somme * 3;
        printf("le triple est: %d", triple);
     }
     else{
         printf("la somme est: %d\n", somme);
     }

    
     

}