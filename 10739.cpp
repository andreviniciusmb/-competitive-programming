#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

#define INF_MEU 1000111

int M[1005][1005];

int min(int a,int b){
    if(a < b) return a;
    return b;
}

int min(int a,int b,int c){
    return min(min(a,b),c);
}

int S(char *vet,int ini,int fim){
    if(ini >= fim) return 0;
    if(M[ini][fim] != -1) 
        return M[ini][fim];
    if(vet[ini] == vet[fim])
        return M[ini][fim] = S(vet,ini+1,fim-1);

    int c1 = 1 + S(vet,ini+1,fim);   //Inserindo
    int c2 = 1 + S(vet,ini,fim-1);   //Removendo
    int c3 = 1 + S(vet,ini+1,fim-1); //Trocar
    return M[ini][fim] = min(c1,c2,c3);
}

int main(){
    int t,n,k=1;
    char *s = (char*)malloc(sizeof(char)* 1005);
    cin >> t;
    while(k <= t){
        cin >> s;
        n = strlen(s);
        memset(M, -1, sizeof(M));
        cout << "Case " << k << ": " << S(s,0,n-1) << endl;
        k++;
    }
    return 0;
}