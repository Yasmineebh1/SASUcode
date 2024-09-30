#include<stdio.h>

int maxim(int nr1,int nr2){
    if(nr1 > nr2)
        return nr1;
}
int main(){
    int n1,n2,max;

    printf("entrer le premier nombre: ");
    scanf("%d",&n1);
    printf("entrer le deuxieme nombre: ");
    scanf("%d",&n2);

    max = maxim(n1,n2);
    printf("le maximum est:%d",max);
    return 0;
}