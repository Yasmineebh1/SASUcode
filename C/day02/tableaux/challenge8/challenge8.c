#include<stdio.h>

int main(){
    int t[50],j[50],n;

    printf("entrer la taille de tableau:");
    scanf("%d",&n);
    for(int i = 0; i < n;i++){
        printf("entrer element %d ", i+1);
        scanf("%d",&t[i]);
    }
    // numbt = t[0];
    for(int i = 0;i < n;i++){
        //for(j = 0;j < n;j++){ 
            j[i] = t[i];
            
            //}
        }
        
        for (int i = 0; i < n; i++)
    {
        printf("%d ",j[i]);
        
    }
    
    
}