#include<stdio.h>
#include<string.h>

int main(){
    char c[50];
    char c2[50];
    int x;
    puts("entrer la 1er valeur: ");
    gets(c);
    puts("entrer la 2eme valeur: ");
    gets(c2);

    x = strcmp(c,c2);
    if(x == 0)
        puts("les chaine sont egales");
    else
        puts("les chaine sont differentes");
}