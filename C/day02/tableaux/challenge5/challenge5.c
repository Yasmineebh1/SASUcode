#include<stdio.h>

int main(){
    int t[100],i,minim,n;

    printf("entrer les nombres element de tableau: ");
    scanf("%d",&n);

    for(i = 0;i < n; i++){
        printf("entrer les nombres: %d ", i+1);
        scanf("%d",&t[i]);
    }
    minim = t[0];
    for(i = 1; i<n; i++){
        if(minim>t[i])
            minim = t[i];
    }
    printf("le plus petit nombre est: %d",minim);
        
}