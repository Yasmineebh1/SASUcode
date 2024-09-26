#include<stdio.h>

int main(){
    int n,s,i;
    printf("entrer un nombre: ");
    scanf("%d",&n);

    s = 0;
   for(i = 1; i <= n; i++){
    s = s + i;
    //printf("%d",i);
    }
    printf("la somme est: %d",s);
}