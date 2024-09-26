#include<stdio.h>
//3!=3*2*1
int main(){
    float f, n;
    printf("entrer un nombre: ");
    scanf("%d",&n);

    if(n == 0)
        return 1;
    else{
        for(int i = 1;i <= n; i++){
            f = f * n;
        }
        printf("la factoriel de %d est %d",n,f);
    }
}