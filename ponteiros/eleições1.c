#include <stdio.h>

int main(void){
    int n;

    scanf("%d", &n);    // n = qntd de votos  

    int votes[10] = {0}; //inicializando td com zero

    int *most_voted, *second_most_voted, i, primeiro, segundo; //variaveis e ponteiros

    int aux = n + 1;
    int entrada[aux]; //armezar o valor na entrada e colocar pra mudar no voto

    most_voted = &primeiro; //endereço de memoria no primeiro
    second_most_voted = &segundo;   //endereço de memoria no segundo

    *most_voted = 0;    // (valor) zero e zero
    *second_most_voted = 0; 

    for(i = 1; i < aux; i++){   // repetição de 1 a 10
        scanf("%d", &entrada[i]);    // conta os votos a entrada
        votes[entrada[i]] += 1;     //muda para 1 com o voto
        if(votes[entrada[i]] == votes[1] || votes[i] == votes[2] || votes[i] == votes[3] || votes[i] == votes[4] || votes[i] == votes[4])
        {   //quatro teste caso tenha algum voto aplica os if
            if(*most_voted > votes[entrada[i]]){    //se o valor maior ainda é maior
                *second_most_voted = votes[entrada[i]];
            }
            else if(*most_voted <= votes[entrada[i]]){   //se o valor maior agora é menor 
                *most_voted = votes[entrada[i]];
            }
        }
    }

    printf("%d %d", segundo, primeiro);

    return 0;
}

/*
    int x = 10;
    int *ponteiro;
    ponteiro = &x;  //ponteiro armazena o endereço de memoria de x

    int y = 20;
    *ponteiro = y;  //ponteiro aloca no endereço de memoria o valor de y    
*/
