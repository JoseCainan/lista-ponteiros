#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  int I=20, *J;
  char C='V', *K;
  float F=20.09, *L;
  int num;
  char ch;
  float aux;

    printf("o valor da variavel inreira e: %d\n", I);
    printf("o caracter da variavel char e: %c\n", C);
    printf("o valor da variavel float e: %.2f\n", F);


    J=&I;
    K=&C;
    L=&F;

      printf("informe o navo caracter para a varavel char\n");
       scanf("%c",&*K);
      printf("digite o novo valor da variavel inteira\n");
       scanf("%d",&*J);
      printf("digite o novo valor decimal para a variavel float\n");
       scanf("%f", &*L);
 
   

      printf("o novo valor de inteiro e: %d\n", I);
      printf(" o novo caracter de char e: %c\n", C);
      printf("o novo valor decimal e: %.2f\n", F);


    return 0;

}