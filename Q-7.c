#include <stdio.h>
#include <stdlib.h>

int ler(int *vetor, int aux){

    for(int i=0; i<aux; i++){
    printf("elemento na posicao %d : %d\n", i+1, vetor[i]);
   }
}

int main(){
 int *vetor, aux;

  printf("digite o numero de elemetos do vetor:\n");
   scanf("%d", &aux);

   vetor = (int*) malloc(aux*sizeof(int));

   for(int i=0; i<aux; i++){
    printf("informe o numero na posição: %d\n",i+1);
    scanf("%d", &vetor[i]);
   }
   printf("elementos do vetor:\n");
   
   ler(vetor,aux);

   free(vetor);





    return 0;

}