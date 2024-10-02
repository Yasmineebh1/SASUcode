#include <stdio.h>
#include <string.h>


int main()
{
    char c[50];
    char c2;
    int i;

    puts("entrer un chaine de caractere: ");
    gets(c);
    printf("entrer un caractere: ");
    scanf("%s",c2);

    int x = 0;
    for(i = 0;c[i] != '\0';i++){
        if(c[i] == c2){

            x++;
        }
    }
   printf("%d",x);

    // x = puts(strlen(c));
}