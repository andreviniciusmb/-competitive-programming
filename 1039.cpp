#include<stdio.h>
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int r1,x1,y1,r2,x2,y2;
    while(scanf("%d %d %d %d %d %d",&r1,&x1,&y1,&r2,&x2,&y2) != EOF){
        float dist = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
        if(dist <= (r1-r2))
            printf("RICO\n");
        else
            printf("MORTO\n");
    }
    return 0;
}