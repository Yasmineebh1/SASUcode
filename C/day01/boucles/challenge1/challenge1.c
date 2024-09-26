#include <stdio.h>

int main() {
    int n,m;
    printf("entrer un valeur:");
    scanf("%d",&m);
    for(n = 1; n <= 10; n++)
    {
        
        printf(" %d * %d = %d\n",m, m, n);
    }

    return 0;
}