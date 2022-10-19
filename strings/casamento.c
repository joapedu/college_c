//problema "Casamento de Padrão Otimizado"
//não finalizado

#include <stdio.h>
#include <string.h>

void teste_repet(char string1[50], char string2[4], int i, int indice){
for(i = 0; i < 50; i++){
    if(string2[4] = string1[i]){
        if(string1[i] = string2[i]){
        printf("%s sim ", string2[i]);
        }
    }
    if(string1[i] = string2[i]){
        printf("%s sim ", string2[i]);
    }
    else if(string1[i] != string2[i]){
        printf("%s não", string2[i]);
        indice += 1;
    }
    }
}

int main(void){
    char string1[50];
    char string2[4];
    int i, indice;
    for(i = 0; i<50; i++){
        scanf("%s", string1[i]);
        if(string1[i] != "A" && string1[i] != "C" && string1[i] != "T" && string1[i] != "G"){
            string1[i] = '/0';
        }
    }
    for(i=0; i<4; i++){
        scanf("%s", string2[i]);
    }

    teste_repet(indice, string1[50], string2[4], i);
    printf("Achei o padrão no índice %d", indice);
    return 0;
}
