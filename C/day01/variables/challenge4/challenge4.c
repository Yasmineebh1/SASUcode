#include<stdio.h>

int main(){
    float vkm,vms;
    printf("entrer la vitesse en kilomètres par heure (km/h): ");
    scanf("%f",&vkm);
    vms = vkm * 0.27778;
    printf("la vitesse en mètres par seconde (m/s) est: %f",vms);
    return 0;
}