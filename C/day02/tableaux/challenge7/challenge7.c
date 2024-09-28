#include<stdio.h>

int main(){
    int t[100], i,j, n,maxim,minim;
    int numb;

    printf("entrer la taille de tableau: ");
    scanf("%d",&n);

    for(i = 0; i < n; i++){
        printf("entrer les nombres %d: ", i+1);
        scanf("%d",&t[i]);
    }
//    numb = 1;
for(i = 0;i < n; i++){
  for(j = i;j < n;j++){
            if(t[j] > t[j+1])
           { 
            t[i] = t[j];
            numb = t[i];
            t[j] = numb;
            
            }
        }
    }
    
    printf("%d",t[j]);
}