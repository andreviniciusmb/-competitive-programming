#include<iostream>
#include <cstdio>
#include <stdlib.h>
#include <cstring>
#include <algorithm>

using namespace std;

bool JC[1001][1001];
int M[1001][1001];

int max(int a,int b){
    if(a > b) return a;
    return b;
}

int S(string vet, int ini, int fim) 
{
    if(M[ini][fim] != -1) 
        return M[ini][fim];

    if (ini == fim) 
        return M[ini][fim] = 1;    
    else if(fim - ini == 1){
        if(vet[ini] == vet[fim])
            return M[ini][fim] = 2;
        return M[ini][fim] = 1;
    }    
    if (vet[ini] == vet[fim]) 
        return M[ini][fim] = 2 + S(vet, ini+1, fim-1); 
    int c1 = S(vet, ini, fim-1);
    int c2 = S(vet, ini+1, fim);
    return M[ini][fim] = max(c1,c2); 
} 

int main(){
    int t,n,ans;
    string s;
    cin >> t;
    getc(stdin);
    while(t > 0){
        getline(cin,s);
        n = s.size();
        memset(M,-1,sizeof(M));
        printf("%d\n",S(s,0,n-1));
        t--;
    }
    return 0;
}