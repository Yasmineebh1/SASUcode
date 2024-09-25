#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("entrer le nombre: ");
    scanf("%d",&n);
    
    if(n < 0)
        printf("negatif");
    else if(n > 0)
        printf("positive");
    else
        printf("null");
        return 0;
}