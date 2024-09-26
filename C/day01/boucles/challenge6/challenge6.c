#include<stdio.h>

int main(){
    int n,i;
    printf("entrer un valeur: ");
    scanf("%d",&n);

    // for(i = 1; i <= n; i+){
    //     if(n % 2 == 0)
    //     {  
    //         printf("%d",i);
    //     }
        
    // } 
    i = 2;
    while(i <= n){
          if(n % 2 == 0)
        {  
            printf(" %d",i);
            i += 2;
        }

    }
  
}