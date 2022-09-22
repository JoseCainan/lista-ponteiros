#include <stdio.h>
#include <stdlib.h>


int soma_dobro(int *p_a, int *p_b);

int main(){
int A, B;

printf("Informe o valor de A e B:");
scanf("%d%d", &A,&B);

soma_dobro(&A,&B);

printf("o novo valor de A e: %d\n  o novo de B e: %d",A,B);

    return 0;
}
int soma_dobro(int *p_a, int *p_b){

    *p_a = (*p_a)*2;
    *p_b = (*p_b)*2;
printf( "a soma do dobro e:%d\n", *p_a+*p_b);
    return 0;
}