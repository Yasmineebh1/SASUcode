#include<stdio.h>

int main(){
    int n, m,i,r;
    printf("entrer un nombre: ");
    scanf("%d",&n);
    printf("entrer la puissance: ");
    scanf("%d",&m);

    r = 1;
    for(i = 1; i <= m; i++){
            r *= n;
    }
        printf("la puissance de %d est %d",n,r);
}