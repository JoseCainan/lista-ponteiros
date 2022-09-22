#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
 char *n, *s;
 char Nom[40], sexo[40];
 int tam, aux;


 printf("informe o nome do usuario\n");
 scanf(" %s", Nom );

printf("Informe o sexo do usuario\n");
scanf("%s", sexo);

tam = strlen(Nom);
aux = strlen(sexo);

n = (char*) malloc(tam*sizeof(char));
s = (char*) malloc(aux*sizeof(char));

  
 if( n==NULL){
  printf("erro na alocação dinamica\n");
  exit(1);

 } else{

     if(aux==9){
       printf("Bem-vindo:" );
       for(int i=0 ; i<tam ; i++){
        printf("%s",n[i]);
            } 

      }else{
        printf("Bem-vinda:" );
        for(int i=0 ; i<tam; i++){
          printf("%s",n[i]);
            }



 }
  free(n);
  free(s);

    return 0;
}
}

