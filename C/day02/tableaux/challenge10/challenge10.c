#include <stdio.h>

int main()
{
    int i, t[50], n, m;
    printf("entrer la taille de tableaux: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("entrer le nombre %d:", i + 1);
        scanf("%d", &t[i]);
    }
    printf("entrer element que voulez vous rechercher:");
    scanf("%d", &m);

    int found = 0;
    for (i = 0; i < n; i++){
        if (t[i] == m)
        {
            found = 1;
            printf("present%d",m);
        }
   
        }
        if (!found)
        {
            
            printf(" non present");
        } 
    return 0;
}
