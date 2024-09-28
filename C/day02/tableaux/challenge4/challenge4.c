#include<stdio.h>

int main(){
    int t[100],i,maxim,n;

    printf("entrer les nombres element de tableau: ");
    scanf("%d",&n);

    for(i = 0;i < n; i++){
        printf("entrer les nombres: %d ", i+1);
        scanf("%d",&t[i]);
    }
    maxim = t[0];
    for(i = 1; i<n; i++){
        if(maxim<t[i])
            maxim = t[i];
    }
    printf("le plus grand nombre est: %d",maxim);
        
}
    
