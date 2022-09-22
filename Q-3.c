#include <stdio.h>
#include <stdlib.h>



int main(){

float *notas, maior=0, menor;

  notas = (float*)malloc(10*sizeof(float));

     if( notas==NULL){
      printf("erro na alocação dinamica\n");
       exit(1);
       }


  for(int i=0; i<10; i++){
    printf("informe a nota : %d\n",i+1);
     scanf("%f", &notas[i]);
        }

 for(int n=0; n<10; n++){
     if(notas[n]>maior){
        maior=notas[n];
             }
        } 

  menor=maior;
  for(int n=0; n<10; n++){
     if(notas[n]<menor){
        menor=notas[n];
             }
        }

  printf("a maior nota e : %.2f\n", maior);
  printf("a menor nota e : %.2f\n", menor);
  free(notas);







    return 0;
}