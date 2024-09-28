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
  for(j = i+1;j < n;j++){
            if(t[i] < t[j])
           { 
            
            numb = t[j];
            t[i] = t[j];
            t[i] = numb;
            
            }
        }
    }
    
     for(i = 0;i < n;i++){
    printf("%d",i+1,t[i]);
    }
}