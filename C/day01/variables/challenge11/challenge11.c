#include<stdio.h>
#include<math.h>

int main(){
    float surface, longueur, largeur;

    printf("entrer la longueur: ");
    scanf("%f",&longueur);
    printf("entrer la largeur: ");
    scanf("%f",&largeur);

    surface = longueur * largeur;
    printf("la surface d'un rectangle est: %f", surface);
}