#include<stdio.h>

int main()
{
    float dyards, dkm;
    printf("entrer la distance en kilometre: ");
    scanf("%f",&dkm);
    dyards = dkm * 1093.61;
    printf("la distance en yards est: %f",dyards);
    return 0;    
}