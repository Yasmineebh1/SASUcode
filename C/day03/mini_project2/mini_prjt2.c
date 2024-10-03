#include <stdio.h>
#include <string.h>
#define MAX 100

int n;

struct Contact
{
    char nom[MAX][100];
    char num_tele[MAX][100];
    char email[MAX][100];
};

void ajout()
{
    int i;
    struct Contact contact;
    printf("entrer le nombre des contacts que voules vous ajouter: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("ajouter le nom de contatct Nr %d: ", i + 1);
        scanf("%s", &contact.nom[i]);
        printf("ajouter le Numero de telephone de contatct Nr %d: ", i + 1);
        scanf("%s", &contact.num_tele[i]);
        printf("ajouter Adresse e-mail de contatct Nr %d: ", i + 1);
        scanf("%s", &contact.email[i]);
        printf("\n");
    }
    printf("bien ajoute \n");
}

void modifier()
{
    int i;
    char nomm[100];
    char numtele[100];
    char mail[100];
    struct Contact contact;
    int found = 0;

    printf("entrer le nom du contact que voulez vous le modifier: ");
    scanf("%s", &nomm);
    for (i = 0; i < n; i++)
    {
        if (strcmp(nomm, contact.nom[i]))
        {
            found = 1;
            printf("entrer le numero de telephone que voulez vous modifier: ");
            scanf("%s", &numtele);
            strcpy(numtele, contact.num_tele[i]);
            printf("entrer adresse email que voulez vous modifier: ");
            scanf("%s", &mail);
            strcpy(mail, contact.email[i]);

            // found++;
            printf("modifier avec succees\n");
        }
    }
    if (!found)
        printf("non trouve!!!\n");
}
void afficher()
{
    int i;
    struct Contact contact;

    printf("entrer le nombre des contacts que voulez vous afficher:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {

        printf("Nom: %s\n", &contact.nom[i]);
        printf("Numero de telephone : %s\n", &contact.num_tele[i]);
        printf("Adresse e-mail: %s\n", &contact.email[i]);
        printf("\n");
    }
}
void rechercher()
{
    struct Contact contact;
    char recherche[100];
    int found = 0;

    printf("Entrer le nom du contact à rechercher: ");
    scanf("%s", recherche);

    for (int i = 0; i < n; i++) {
        if (strcmp(recherche, contact.nom[i]) == 0) {
            printf("Contact trouvé:\n");
            printf("Nom: %s\n", contact.nom[i]);
            printf("Numero de telephone: %s\n", contact.num_tele[i]);
            printf("Adresse e-mail: %s\n", contact.email[i]);
            found = 1;
            break; 
        }
    }
    if (!found) {
        printf("Contact non trouvé!!!\n");
    }
}
void suppression()
{

    char nomm[100];
    int found = 0;
    struct Contact contact;

    printf("Entrer le nom du contact à supprimer: ");
    scanf("%s", nomm);

    for (int i = 0; i < n; i++)
    {
        if (strcmp(nomm, contact.nom[i]) == 0)
        {
            found = 1;

            for (int j = i; j < n - 1; j++)
            {
                strcpy(contact.nom[j], contact.nom[j + 1]);
                strcpy(contact.num_tele[j], contact.num_tele[j + 1]);
                strcpy(contact.email[j], contact.email[j + 1]);
            }
            n--;
            printf("Contact supprimé avec succès.\n");
        }
    }
}
int main()
{
    int choix, i;
    do
    {
        printf("Systeme de Gestion de Contacts\n");
        printf("1. Ajouter un Contact: \n");
        printf("2. Modifier un Contact: \n");
        printf("3. Supprimer un Contact: \n");
        printf("4. Afficher Tous les Contacts: \n");
        printf("5. Rechercher un Contact: \n");
        printf("6. Quitter: \n");

        printf("Entrer votre choix: ");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            ajout();
            break;
        case 2:
            modifier();
            break;
        case 3:
            suppression();
            break;
        case 4:
            afficher();
            break;
        default:
            break;
        }
    } while (choix != 6);
}
