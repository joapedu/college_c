#include <stdio.h>

void computer_votes(int n, int votes[9], int *most_voted, int *second_most_votes, int i, int entrada, int primeiro, int segundo){
    most_voted = &primeiro;
    second_most_votes = &segundo;

    *most_voted = 0;
    *second_most_votes = 0;

    for(i = 0; i < n; i++){
        scanf("%d", &entrada);
        entrada += 1;
        votes[entrada] += 1;
        if(votes[entrada] > 1){
            *second_most_votes = votes[entrada];
            if(votes[entrada] > *most_voted){
                *most_voted = votes[entrada];
            }
        }
        entrada = '\0';
    }
}

int main(){
    int n;
    scanf("%d", &n);    // repet = qntd de votos  

    int votes[10] = {0};

    int *most_voted, *second_most_voted, i, entrada, primeiro, segundo;

/*
    int x = 10;
    int *ponteiro;
    ponteiro = &x;  //ponteiro armazena o endereço de memoria de x

    int y = 20;
    *ponteiro = y;  //ponteiro aloca no endereço de memoria o valor de y    
*/

    return 0;
}
