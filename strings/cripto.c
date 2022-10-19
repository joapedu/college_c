//BEE 1024 (URI) Nível 5
//(strings)
//não finalizado

#include <stdio.h>
#include <string.h>
#include <math.h>

void primeira_passada(int aux, int i, char padrão[20]){
//declarar 3 posições a direita
for(i = 0; i < 20; i++){
    aux = i + 3;
    padrão[i] == padrão[aux];
}
}

void segunda_passada(char padrão[20]){
//inverter posições
//?
}

void terceira_passada(){
//metade em diante volta um caractere
//?
}

int main(void){
    int aux, i, j, repet;
    char padrão[20];
    char alfabeto[30] = {"'abcdefghijklmnopqrstuvwxyz{|}~"};

    scanf("%d", &repet);

    for(i = 0; i < repet; i++){
        scanf("%c", padrão[i]);
    }

return 0;
}
