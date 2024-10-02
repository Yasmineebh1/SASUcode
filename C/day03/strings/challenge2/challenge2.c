#include<stdio.h>
#include<string.h>

int main(){
    char c[100];
    int n = 0;
    printf("saisir un character: ");
    gets(c);
    for(int i = 0; c[i] != '\0';i++)
        n++;
    printf("la longueur de la chaine est: %d",n);
}