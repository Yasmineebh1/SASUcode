#include<stdio.h>

int main(){
    int number;
    printf("entrer un nombre: ");
    scanf("%d",&number);
    if(number % 2 == 0){
        printf("paire");
    }
    else{
        printf("impaire");
    }
}