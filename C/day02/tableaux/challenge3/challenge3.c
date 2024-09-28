#include<stdio.h>

int main(){
    int t[100],i,m,n,s;

    printf("entrer la taille des tableaux: ");
    scanf("%d",&n);

    s = 0;
    for(i = 0;i < n; i++){
    printf("entrer les nombre: ");

        scanf("%d",&t[i]);
        }
        s = 0;
        for(i = 0;i < n; i++){
        s = s+t[i];
         }
         printf("la somme est: %d",s);
   
}