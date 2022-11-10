#include <stdio.h>

int main(){
    int x = 10;
    double y = 20.50;
    char z = 'a';

    int *pX = &x;
    int *pY = &y;
    int *pZ = &z;

// com X
    printf("Endereço x = %d\n", pX);    //endereço sem "*"
    printf("Valor de x = %d\n", *pX);   //valor com "*"

//com Y
    printf("Endereço x = %d\n", pX);    //endereço sem "*"
    printf("Valor de x = %lf\n", *pX);   //valor com "*"

//com Z
    printf("Endereço x = %d\n", pX);    //endereço sem "*"
    printf("Valor de x = %c\n", *pX);   //valor com "*"
//OBS: "ENDEREÇO SEMPRE INTEIRO"
 
    return 0;
}
