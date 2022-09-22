#include <stdio.h>
#include <stdlib.h>


int main(){
int cont=0, v[]= {5,4,6,3,7,8}, *p=&v;


for(int n=0; n<6; n++){
    v[n]=*p+1;
    printf("%d",v[n]);
}




    return 0;
}