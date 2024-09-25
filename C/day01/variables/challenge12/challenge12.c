#include<stdio.h>
#include<math.h>

int main(){
    int n,a,b,c,d;
    printf("entrer quatre chiffres: ");
    scanf("%d",&n);
    a = n / 1000;
    b = n / 100 - (a * 10);
    c = n / 10 - (a * 100) - (b * 10);
    d = n % 10;
    
    printf("%d %d %d %d",d,c,b,a);

    
    
}