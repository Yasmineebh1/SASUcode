#include<stdio.h>

int main(){
    int t[100],i,j,n,f;
    f = 0;
    printf("entrer la taille de tableau: ");
    scanf("%d",&n);

    for(i = 0; i < n; i++){
        printf("entre le nombre %d:",i+1);
        scanf("%d",&t[i]);
    }
    printf("entre le factoriel des nombres :");
    scanf("%d",&f);

    for(i = 0; i < n; i++){
        t[i] = t[i] * f;
    }
   int p = 0;
   while (n > p)
   {
        printf ("res %d :",t[p]);
        p++;
   }
   return (0);
}