#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main() {
    int n,i,j,c;
    scanf("%d",&n);
    getchar();
    for(i = 0; i < n; i++) {
        char frase[1001],aux,str2[1001];
        gets(frase);
        for(j = 0; j < strlen(frase); j++) {
            if(frase[j] >= 65 && frase[j] <= 90 || frase[j] >= 97 && frase[j] <= 122 )
                frase[j] += 3;
        }
        c=0;
        for(j=strlen(frase) - 1; j>=0; j--){
            str2[c] = frase[j];
            c++;
        }
        str2[c] = '\0';
        strcpy(frase,str2);
        for(j = strlen(frase)/2; j < strlen(frase); j++)
            frase[j] -= 1;

        printf("%s\n",frase);
    }
}
