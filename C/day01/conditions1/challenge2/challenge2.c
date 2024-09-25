#include<stdio.h>

int main()
{
    char caractere;
    printf("entrer un caractere: ");
    scanf("%c",&caractere);

    switch (caractere)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'u':
    case 'o':
    printf("bravo");
    break;
    default:
    printf("entrer un voyelle");
        break;
    }
    
}