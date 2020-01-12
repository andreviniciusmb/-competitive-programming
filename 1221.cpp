#include<stdio.h>

int primo(long long int x){
    int j;
    if(x%2 == 0){
        return 0;
    }else{
        for(j=3;j*j < x;j += 2){
			if((x%j)==0)
				return 0;
		}
        return 1;
    }
}
int main(){
	int n,i,p;
	long long int x;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lld",&x);
		if(x == 2)
            p = 1;
        else
            p = primo(x);
		if(p == 1)
			printf("Prime\n");
		else
			printf("Not Prime\n");
	}
	return 0;
}
