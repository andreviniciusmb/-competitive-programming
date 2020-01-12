#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int n,c;
    float media;
    cin >> c;
    while(c > 0){
        int soma=0,cont=0;
        cin >> n;
        int vet[n];
        for(int i = 0;i < n;i++){
            cin >> vet[i];
            soma += vet[i];
        }
        media = soma/(float)n;
        for(int i = 0;i < n;i++){
            if(vet[i] > media)
                cont++;
        }
        float t = cont/(float)n * 100;
        printf("%.3f%%\n",t);
        c--;
    }
}
