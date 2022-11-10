#include <stdio.h>

int main(){
    
    int x = 10;
    int *ponteiro;
    ponteiro = &x;  //ponteiro armazena o endereço de memoria de x

    int y = 20;
    *ponteiro = y;  //ponteiro aloca no endereço de memoria o valor de y

    print("%d %d\n", x, y); //valor fica "20 20" pois ponteiro foi uma ponte de x para y.

    return 0;
}
