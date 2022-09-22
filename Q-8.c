#include <stdio.h>
#include <stdlib.h>


int main(){
    float *nota, aux, media, X=0;

    printf("informa quatidade de alunos da turma\n");
     scanf("%f", &aux);

     nota = (float*)malloc(aux*sizeof(float));
     
       if(nota==NULL){
        printf("Alocacao dinamica falhou\n");
        exit(1);

       }else{
        for(int n=0; n<aux; n++){
            printf("informe a nota do aluno %d\n",n+1);
             scanf("%f", &nota[n]);
        }
        for(int n=0; n<aux; n++){
            X = X+nota[n];
        }
        media = X/aux;

         printf(" A media dos alunos e : %.2f\n", media);

         free(nota);






       }










    return 0;
}