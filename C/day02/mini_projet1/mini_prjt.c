#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// char livre[max_books][100];
char livre[100][20];
char titre_livre[100][20];
char auteur_livre[100][20];
float prix_livre[100];
int quantite_stock[100];
int compte_livre;

void ajout()
{
    int i, n;
    printf("entrer le nombre des elements que voulez vous ajoutez:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("entrer le titre du livre %d: ", i + 1);
        scanf("%s", &titre_livre[i]);
        printf("entrer Auteur du livre %d: ", i + 1);
        scanf("%s", &auteur_livre[i]);
        printf("entrer le Prix du livre %d: ", i + 1);
        scanf("%s", &prix_livre[i]);
        printf("entrer la Quantite en stock %d: ", i + 1);
        scanf("%s", &quantite_stock[i]);
        printf("\n");
    }
}
void afficher()
{
    int i, n;
    printf("entrer le nombre des elements que voulez vous afficher:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {

        printf("le titre: %s\n", &titre_livre[i]);
        printf("Auteur: %s\n", &auteur_livre[i]);
        printf("Prix de livre: %s\n", &prix_livre[i]);
        printf("Auantite de stock: %s\n", &quantite_stock[i]);
        printf("\n");
    }
}
void update()
{
    int i, n;
    char nom[100];
    int found = 0;
    printf("entrer le nom de livre que voules vous mettre a jour: ");
    scanf("%s", &nom);

    for (i = 0; i < n; i++)
    {
        if (strcmp(nom, titre_livre[i]) == 0)
        {
            printf("entrer le stock a ajoute: ");
            scanf("%s", &quantite_stock[i]);
            printf("stock a ete mis a jour");
            found++;
            break;
        }
    }
    if (found == 0)
    {
        printf("le livre no trouve!!");
    }
    // break;
}
void delete()
{
    int i, n;
    char sup[100];
    int found = 0;
    printf("entrer le nom de livre que voules vous supprimez: ");
    scanf("%s", &sup);
    if (strcmp(sup, titre_livre[i]) == 0)
    {
        strcpy(titre_livre[i], titre_livre[i - 1]);
        strcpy(auteur_livre[i], auteur_livre[i - 1]);
        prix_livre[i] = prix_livre[i - 1];
        quantite_stock[i] = quantite_stock[i - 1];
        i--;
        found = 1;
        printf("le livre est supprimer");

     //   break;
    }

    if (!found)
    {
        printf("le livre no trouve!!");
    }
}
int main()
{

    int choix;
    do
    {
        printf("Gestion de Stock:\n");
        printf("1. Ajouter un Livre au Stock:\n");
        printf("2. Afficher tous les livres disponibles:\n");
        printf("3. Rechercher un livre par son titre.:\n");
        printf("4. Mettre a jour la quantite d'un livre:\n");
        printf("5. Supprimer un livre du stock:\n");
        printf("6. Afficher le nombre total de livres en stock:\n");
        printf("7. Quitter:\n");
        printf("Entrer votre choix: ");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            ajout();
            break;
        case 2:
            afficher();
            break;
        case 4:
            update();
            break;
        case 5:
            delete();
            break;
        default:
            break;
        }
    } while (choix != 7);
    // printf("veuillez entrer le nombre entre 1 et 6!!!");
}