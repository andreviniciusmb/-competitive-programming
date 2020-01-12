#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int a,b;
char c;

int Examinar(int x){
    char aux[5];
    sprintf(aux,"%d",x);
    int t,i = 0;
    t = strlen(aux);
    while(i < t){
        if(aux[i] == '7')
            aux[i] = '0';
        i++;
    }
    return atoi(aux);
}
int main(){
    scanf("%d \n%c %d",&a,&c,&b);
    a = Examinar(a);
    b = Examinar(b);
    if(c == '+')
        printf("%d\n",Examinar(a+b));
    else
        printf("%d\n",Examinar(a*b));
}
