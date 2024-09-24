#include<stdio.h>

int main(){
    int C;
    printf("entrer la temperature en celsius: ");
    scanf("%d",&C);

    if(C < 0)
        printf("solide");
    if(0 <= C < 100 )
        printf("Liquide");
    if(C >= 100)
        printf("Gaz");
        return 0;
}