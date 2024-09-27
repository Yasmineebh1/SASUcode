#include<stdio.h>



int main(){
    char n;
    printf("entrer un alphabet: ");
    scanf("%c",&n);

    if(n >= 65 && n <= 90)
        printf("donne");
    else
        printf("veuillez entrer un majuscule!!!!!");
}