#include<iostream>
#include<stdio.h>
#include<stdlib.h>

typedef long long int LLI;

int main(){
    int n;
    scanf("%d",&n);
    while(n != 0){
        LLI *vet = (LLI*)malloc(sizeof(LLI) * n);
        for(int i = 0;i < n;i++){
            scanf("%lld",&vet[i]);
        }
        LLI t = 0;
        for(int i = 1;i < n ;i++){
            if(vet[i - 1] < 0)
                t += (-1)*(vet[i-1]);
            else
                t += vet[i-1];

            vet[i] += vet[i-1];
            
        }
        printf("%lld\n",t);
        scanf("%d",&n);
    }
}