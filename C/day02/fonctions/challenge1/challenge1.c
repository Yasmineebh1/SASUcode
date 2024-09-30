#include<stdio.h>

int fonction_somme(int a, int b){
    
    return a + b;
}

int main(){
    int nb1, nb2,result;

    printf("entrer le premier nombre: ");
    scanf("%d",&nb1);
    printf("entrer le deuxieme nombre: ");
    scanf("%d",&nb2);

    result = fonction_somme(nb1,nb2);
    printf("la somme est: %d",result);
    return 0;
}