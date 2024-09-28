#include<stdio.h>

int main(){
    int i,j,n,m;
    int t[100];
    
    printf("entrer les nombres element de tableau: ");
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        printf("entrer element %d:",i+1);
        scanf("%d",&t[i]);    
    }
    for(i = 0; i < n;i++){
        printf("%d\n",t[i]);
    }
    return 0;
}