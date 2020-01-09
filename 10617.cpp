#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <cstring>
#include <algorithm>

using namespace std;

typedef long long int LLI;

LLI M[62][62];

LLI F(string vet,int ini,int fim){
    if(ini > fim) return 0;
    if(M[ini][fim] != -1) return M[ini][fim];
 
    LLI c1 = F(vet,ini,fim-1);
    LLI c2 = F(vet,ini+1,fim);
    LLI c3 = F(vet,ini+1,fim-1);
    LLI sol = c1+c2-c3;

    if(vet[ini] == vet[fim]){
        sol += 1 + c3; 
    }
    return M[ini][fim] = sol;
}

int main(){
    int n;
    string s;
    scanf("%d",&n);
    getc(stdin);
    while(n--){
        getline(cin,s);
        int tam = s.size();
        memset(M,-1,sizeof(M));
        cout << F(s,0,tam-1) << endl;
    }
}