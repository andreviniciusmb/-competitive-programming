#include<stdio.h>

void Quick(int vetor[], int inicio, int fim){

   int pivo, aux, i, j, meio;

   i = inicio;
   j = fim;

   meio = (int) ((i + j) / 2);
   pivo = vetor[meio];

   do{
      while (vetor[i] < pivo) i = i + 1;
      while (vetor[j] > pivo) j = j - 1;

      if(i <= j){
         aux = vetor[i];
         vetor[i] = vetor[j];
         vetor[j] = aux;
         i = i + 1;
         j = j - 1;
      }
   }while(j > i);

   if(inicio < j) Quick(vetor, inicio, j);
   if(i < fim) Quick(vetor, i, fim);

}

int main(){
    int n,x,j,i = 0;
    scanf("%d",&n);
    while(i < n){
        scanf("%d",&x);
        int vet[x];
        for(j = 0;j < x;j++)
            scanf("%d",&vet[j]);
        Quick(vet,0,x-1);
        for(j = 0;j < x;j++){
            if(j < x-1)
                printf("%d ",vet[j]);
            else
                printf("%d\n",vet[j]);
            }
        i++;
    }
}
