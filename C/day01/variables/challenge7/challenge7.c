#include<stdio.h>

int main(){
    int moyennep,nombre1,nombre2,nombre3;

    printf("entrer le 1er nombre: ");
    scanf("%d",&nombre1);
    printf("entrer le 2eme nombre: ");
    scanf("%d",&nombre2);
    printf("entrer le 3eme nombre: ");
    scanf("%d",&nombre3);

    moyennep = (nombre1 * 2) + (nombre2 * 3) + (nombre3 * 5) / 2 + 3 + 5;
    printf(" la moyenne ponderee est: %d", moyennep);
    return 0;
}