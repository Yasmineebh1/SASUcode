#include<stdio.h>

int main(){
    int t[100], i,j, n;
    int numbt;

    printf("entrer la taille de tableau: ");
    scanf("%d",&n);

    for(i = 0; i < n; i++){
        printf("entrer les nombres %d: ", i+1);
        scanf("%d",&t[i]);
    }
 
    for(i = 0;i < n;i++){
        //for comparison
        for(j = 0;j < n - 1;j++){
            if(t[j] > t[j+1]){
                numbt = t[j];
                t[j] = t[j+1];
                t[j+1] = numbt;
            }
        }
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",t[i]);
    }
    
//  printf("%d",numb);
    }
    //     for(i = 0;i < n;i++){
    //    }

    //  for(i = 0;i < n;i++){
    // printf("%d",i+1,t[i]);
    // }
// }