#include<stdio.h>
#include<math.h>

int main(){
    float delta,x,x1,x2,b,a,c;
    printf("entrer la valeur de a: ");
    scanf("%f",a);
    printf("entrer la valeur de b: ");
    scanf("%f",b);
    printf("entrer la valeur de c: ");
    scanf("%f",c);

    delta =  pow(b,2) - (4 * a * c);

    if(delta < 0)
        printf("aucune solutions");
    if(delta == 0) // b!= 0 == > error
    { 
        x = -(b / 2 * a);
        printf("la solution est: %f", x);
    }
    if(delta > 0){
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("les solution est %f, %f", x1, x2);
       
    }
     return 0;
}