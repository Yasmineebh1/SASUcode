#include<stdio.h>

int multiple(int a,int b){
    int produit = a * b;
    return produit;
}

int main(){
    int nr1,nr2;
    printf("entrer le premier nombre: ");
    scanf("%d",&nr1);
    printf("entrer le deuxieme nombre: ");
    scanf("%d",&nr2);

    int resultat = multiple(nr1,nr2);
    printf("la resultat de multiplication est: %d",resultat);

}