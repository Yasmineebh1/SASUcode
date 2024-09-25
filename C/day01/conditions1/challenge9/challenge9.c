#include<stdio.h>

int main(){
    char n;
    printf("entrer un alphabet: ");
    scanf("%d",&n);

    if(n >= 'A' && n <= 'Z')
        printf("c\'est un majiscule");
    else
        printf("c\'est un miniscule");

}