#include <stdio.h>

int main()
{
    int t[100], i, n;
    int numt;
    int j;

    printf("entrer la taille du tableau: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("entrer element nr%d :", i + 1);
        scanf("%d", &t[i]);
    }
    printf("entrer le nombre que voulez vous rechercher: ");
    scanf("%d", &numt);
    int found = 0;
    for (i = 0; i < n; i++)
    {
        if (numt == t[i])
        {
            found = 1;
            printf("le numero que vous rechercher est: %d\n ", numt);
        }
    }
    if (!found)
        {
            //printf("il n\'ya pas ce nombre");
            return 0;
        }

    int repl;
    printf("entrer element que voulez vous le remplacer avec: %d ", numt);
    scanf("%d", &repl);

    // remplacement
    for (j = 0; j < n; j++)
    {

        // repl = numt;
        if (t[j] == numt)
        {
            t[j] = repl;
        }
    }
    // t[i] = t[i+1];
    // if(t[]){
    //     printf("%d",t[i]);
    // }
    for (j = 0; j < n; j++)
    {
        printf("%d ", t[j]);
    }
}