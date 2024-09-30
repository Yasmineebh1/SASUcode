#include<stdio.h>
#include<math.h>

int main(){
    int mois,jours,heures,minutes,secondes,choix,annee;

    printf("entrer l\'annee: ");
    scanf("%d",&annee);

    printf("1. convertir en mois:\n ");
    printf("2. convertir en jours:\n ");
    printf("3. convertir en heures:\n ");
    printf("4. convertir en minutes:\n ");
    printf("5. convertir en secondes:\n ");

    printf("entrer votre choix: ");
    scanf("%d",&choix);

    switch (choix)
    {
    case 1:
        mois = annee * 12;
        printf("l\'annee est: %d", mois);
        break;
    case 2:
        jours = annee * 365;
        printf("les jours est: %d", jours);
        break;
    case 3:
        heures = jours * 24;
        printf("l\'heure est: %d", heures);
        break;
    case 4:
        minutes = heures * 60;
        printf("minutes est: %d", minutes);
        break;
    case 5:
        secondes = minutes * 60 ;
        printf("secondes est: %d", setbuf);
        break;
    default:
        printf("incorrect!");
        break;
    }

    // printf("entrer ");
}