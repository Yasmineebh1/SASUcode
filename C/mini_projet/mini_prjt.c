#include<stdio.h>
#include<stdlib.h>
#define max_books 100


int main(){
    char livre[100],titre_livre[100],auteur_livre[50];
    float prix_livre,quantite_stock;
    // struct  infos
    // {
    //     char livre[100],titre_livre[100],auteur_livre[50];
    //     float prix_livre,quantite_stock;
    // };
    printf("les informations:\n ");
    printf("Ajouter le titre du livre: ");
    scanf("%d\n",&titre_livre);
    printf("Ajouter Auteur du livre: ");
    scanf("%d\n",&auteur_livre);
    printf("Ajouter Prix du livre: ");
    scanf("%d\n",&prix_livre);
    printf("Ajouter Quantité en stock: ");
    scanf("%d",&quantite_stock);
    

}