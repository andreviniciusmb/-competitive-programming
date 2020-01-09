#include<iostream>
#include <cstdio>
#include <stdlib.h>
#include <cstring>
#include <algorithm>

using namespace std;

int M[1005][1005];

int max(int a,int b){
    if(a>b) return a;
    return b;
}

int w[1005],v[1005];
int F(int *w,int *v,int fim,int cap){
    if(fim < 0) return -1;
    if(cap == 0 || fim == 0) return 0;
    if(w[fim-1] > cap)   return F(w,v,fim-1,cap);
    if(M[fim][cap] != -1) return M[fim][cap];
    int c1 = v[fim-1] + F(w,v,fim-1,cap-w[fim-1]); //Pegando
    int c2 = F(w,v,fim-1,cap); //N pegando

    return M[fim][cap] = max(c1,c2);
}

int main(){
    int n,c,k=1,i=0;
    scanf("%d %d",&n,&c);
    while(n != 0 && c != 0){  // #Livros - Capacidade
        memset(w,0,sizeof(w));
        memset(v,0,sizeof(v));
        memset(M,-1,sizeof(M));
        while(i < n){
            scanf("%d %d",&w[i],&v[i]);  //Peso - Interesse
            i++;
        }
        printf("Caso %d: %d\n",k++,F(w,v,n,c));
        scanf("%d %d",&n,&c);
        i=0;
    }
    return 0;
}