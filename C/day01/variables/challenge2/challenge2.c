 #include<stdio.h>

 int main(){
    float c, k;
    printf("entrer la temperature en Celsius: ");
    scanf("%f",&c);
    k = c + 273.15;
    printf("la temperature en kelvin est:%f",k);
    return 0;
 }