#include<stdio.h>

int main(){
    int moyenne;
    printf("entrer la moyenne de note: ");
    scanf("%d",&moyenne);

    if(moyenne > 16)
        printf("tres bien");
    else if(moyenne >= 14 && moyenne <= 16)
        printf("bien");
    else if(moyenne >= 12 && moyenne <= 14)
        printf("assez bien");
    else if(moyenne >=10 && moyenne <= 12)
        printf("passable");
        else
            printf("recale");
    // if(moyenne < 10)
    //     printf("recale");
    
}