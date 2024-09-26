#include<stdio.h>
//3!=3*2*1
int main(){
    int f, n;
    printf("entrer un nombre: ");
    scanf("%d",&n);

    if(n <= 0)
        return 1;
    else{
        f = 1;
        for(int i = 1;i <= n; i++){
            f = f * i;
        }
        printf("la factoriel de %d est %d",n,f);
    }
}