#include<stdio.h>
#include<math.h>

int main(){
    double p,volume;
    int r;
    printf("entrer le rayon de la sephere: ");
    scanf("%d",&r);
    
    volume = (4 / 3) * 3.14 * pow((r),3);
    printf("le volume d'une sphere est: %lf", volume);
    return 0;
}