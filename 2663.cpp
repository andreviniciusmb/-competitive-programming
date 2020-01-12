#include<iostream>

using namespace std;

void Ordenar(int *vet,int n){
    int aux,i,j;
    for(i = 1;i < n;i++){
        for(j = 0;j < n-1;j++){
            if(vet[j] < vet[j+1]){
                aux = vet[j+1];
                vet[j+1] = vet[j];
                vet[j] = aux;
            }
        }
    }
}

int main(){
    int n,k,i = 0;
    cin >> n;
    cin >> k;
    int *vet = (int*)malloc(sizeof(int) * n);
    while(i < n){
        cin >> vet[i];
        i++;
    }
    i = 0;
    Ordenar(vet,n);
    i = 0;
    while(i < k || vet[i-1] == vet[i] ){
        i++;
    }
    cout << i << endl;
    return 0;
}
