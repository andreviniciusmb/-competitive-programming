#include <iostream>
#include <algorithm>
#include<string.h>
#include<stdio.h>
#include<vector>

using namespace std;

int t[25],q[25];

int max(int a,int b){
    if(a>b) return a;
    return b;
}

int F(int n,int p){
    if(n <= 0 || p == 0) return 0;
    if(q[n-1] > p) return F(n-1,p);
    int c1 = t[n-1] + F(n-1,p - q[n-1]);
    int c2 = F(n-1,p);
    return max(c1,c2);
}

int main(){
    int n,i,p,div;
    scanf("%d",&n);
    while(n != 0){
        scanf("%d",&p);
        for(i = 0;i < n;i++){
            scanf("%d %d",&t[i],&q[i]);
        }
        //memset(M,-1,sizeof(M));
        int tempo_total = F(n,p);
        cout << tempo_total << " min." << endl;
        scanf("%d",&n);
    }
    return 0;
}