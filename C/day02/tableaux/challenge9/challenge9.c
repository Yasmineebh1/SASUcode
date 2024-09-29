#include <stdio.h>

int main()
{
    int t[50], n, i;
    int num;

    printf("entrer la taille de tableau: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("entrer le nombre %d:", i + 1);
        scanf("%d", &t[i]);
    }
    for (int i = 0; i < n / 2; i++)
    {

        num = t[i];
        t[i] = t[n - i - 1];
        t[n - i - 1] = num;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d ", t[i]);
    }

    return 0;
}