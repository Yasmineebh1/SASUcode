#include<stdio.h>
#include<math.h>

int main(){
    int r,volume;
    const float p = 3.14;
    printf("entrer le rayon de la sephere: ");
    scanf("%d",&r);
    
    volume = (4 / 3) * r * pow((r),3);
    printf("le volume d'une sphere est: %d", volume);
    return 0;
}