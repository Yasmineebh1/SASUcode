#include<stdio.h>

int minim(int nr1,int nr2){
    if(nr1 > nr2)
        return nr2;
}
int main(){
    int n1,n2,min;

    printf("entrer le premier nombre: ");
    scanf("%d",&n1);
    printf("entrer le deuxieme nombre: ");
    scanf("%d",&n2);

    min = minim(n1,n2);
    printf("le minimum est:%d",min);
    return 0;
}