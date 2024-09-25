#include<stdio.h>
#include<math.h>


int main(){
    char n;
    printf("entrer un alphabet: ");
    scanf("%d",&n);

    if(n >= 'A' && n <= 'Z')
        printf("donne");
    else
        printf("veuillez entrer un majuscule!!!!!");
}