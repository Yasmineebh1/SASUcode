#include<stdio.h>

// int main(){
//     int t[4] = {1,2,3,4}, i = 0;

//     for(i = 0;i < 4;i++)
//         t[i] ;
//     for(i = 0; i < 4; i++)
//         printf("%d\n",t[i]);
// }

int main(){

    int t[100],i,n,m;

    

    // for(i = 0;i<n;i++)
    // {
    //     t[i]
    //     for(i = 0;i<n;i++)
    //     {
    //         printf("%d\n", t[i]);
    //     }
    // printf("entrer les valeurs elements");
    // scanf("%d",&m);}
    // for(i = 0;i<n;i++)
    //     printf("%d\n",t[m]);

    printf("entrer les nombres element de tableau: ");
    scanf("%d",&n);
    for(i = 0; i < n; i++){
        printf("entrer element %d:",i+1);
        scanf("%d",&t[i]);    
    }
    for(i = 0; i < n;i++){
        printf("%d\n",t[i]);
    }
    // printf("entrer les elements: ");
    // scanf("%d",&m);
   

}
