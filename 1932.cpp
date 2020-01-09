#include <cstring>
#include <algorithm>
#include<iostream>

using namespace std;

int c;
int *vet;
int M[222111][3];

int lucro(int ini,int flag,int n){
	if(ini >= n) return 0;
	if(M[ini][flag] != -1) return M[ini][flag];
	if(flag == 0){ //se n comprou
        int c1 = -c -(vet[ini]) + lucro(ini+1,1,n); //comprar
        int c2 = lucro(ini+1,0,n); //n comprar
    	return M[ini][flag] = max(c1,c2);
	}
	int c1 = vet[ini] + lucro(ini+1,0,n);
	int c2 = lucro(ini+1,1,n);
	return M[ini][flag] = max(c1,c2);
}

int main(){
	int n,j = 0;
	scanf("%d %d",&n,&c);
	vet = (int*)malloc(sizeof(int) * (n+2));
	for(int i = 0;i < n;i++){
		scanf("%d",&vet[i]);
	}
	memset(M,-1,sizeof(M));
	cout << lucro(0,0,n) << endl;
	return 0;
}
