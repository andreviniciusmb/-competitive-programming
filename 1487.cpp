#include <iostream>
#include <algorithm>
#include<string.h>
#include<stdio.h>

using namespace std;

int d[105],p[105];
int JC[105][605],M[105][605];
int n,t;

int max(int a,int b){
    if(a > b) return a;
    return b;
}

int max(int a,int b,int c){
    return max(max(a,b),c);
}


int F(int tam,int tempo){
    if(tam == 0 || tempo == 0) return 0;
    if(JC[tam][tempo] == 1) return M[tam][tempo];
    if(d[tam-1] > tempo)
        return M[tam][tempo] = F(tam-1,tempo);
    int c1 = p[tam-1] + F(tam,tempo - d[tam-1]);   //Pegar e repetir
    int c2 = p[tam-1] + F(tam-1,tempo - d[tam-1]); //Pegar e n repetir
    int c3 = F(tam-1,tempo);                 //N pegar
    JC[tam][tempo] = 1;
    return M[tam][tempo] = max(c1,c2,c3);
}
int main(){
	int i, tc = 0;
	while(scanf(" %d %d", &n, &t), !(n == 0 && t == 0)){
		for(i = 0; i < n; i++){
			scanf(" %d %d", &d[i], &p[i]);
		}
		memset(M, -1, sizeof(M));
        memset(JC,0,sizeof(JC));
		printf("Instancia %d\n%d\n\n", ++tc, F(n, t));
	}
	return 0;
}