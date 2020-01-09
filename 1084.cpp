#include <iostream> 
#include <stdio.h>
  
using namespace std; 
   
void F(int n,int d) 
{ 
    int k = 0,min,num; 
    int *vet = (int*)malloc(sizeof(int) * n);
    scanf("%d",&num);
    for(int i = 0;i < n;i++){
        vet[i] = num%10;
        num = num/10;
    }
    int t = n;
    for(int i = 0;i < n/2;i++,t--){
        int c = vet[i];
        vet[i] = vet[t-1];
        vet[t-1] = c;
    } 
 
    int p = 0,minimo;
    for(int j = 0;j < d;j++){
        minimo = vet[0];
        for(int i = n-1;i >= 0;i--){
            if(vet[i] <= minimo){
                minimo = vet[i];
                p = i;
            }
        }
        for(int aux = p;aux < n-1;aux++){
            vet[aux] = vet[aux+1];
        }
    }
    int tam = n-d,i = 0;
    while(i < tam){
        printf("%d",vet[i]);
        i++;
    }
    printf("\n");
} 
  
int main() 
{ 
    int n,d;
    scanf("%d %d",&n,&d);
    while(n != 0 && d !=0){
        F(n,d);
        scanf("%d %d",&n,&d);
    }
    return 0; 
} 