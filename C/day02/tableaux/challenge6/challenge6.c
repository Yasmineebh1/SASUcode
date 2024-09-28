#include<stdio.h>

int main(){
    int t[100],i,n,mult;

    printf("entrer la taille de tableau: ");
    scanf("%d",&n);

    for(i = 0; i < n; i++){
        printf("entre le nombre %d:",i+1);
        scanf("%d",&t[i]);
    }
    mult = 1;
    for(i = 0; i < n; i++){
        mult = mult * t[i];
    }
     printf("la multiplication est: %d",mult);
}