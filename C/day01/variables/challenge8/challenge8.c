#include<stdio.h>
#include<math.h>

int main()
{
    int moyenneG,a,b,c;

    printf("entrer le 1er nombre: ");
     scanf("%d",&a);
    printf("entrer le 2eme nombre: ");
    scanf("%d",&b);
    printf("entrer le 3eme nombre: ");
    scanf("%d",&c);
    moyenneG = pow((a * b * c),(1/3));

    printf("la moyenne geometrique est %d", moyenneG);
    return 0;
}