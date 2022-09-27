//QUESTÃO DO URI 1929 (TRIÂNGULO)
//INACABADA, COM ERRO.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void maior_lado(int vara[3], int vara[2], int vara[1], int vara[0], int maior, int i, int menor, int segundo, int terceiro){
    for(i = 0; i < 4; i++){
        if (vara[i] > maior){
            maior = vara[i];
        } 
        else if(vara[i] > segundo){
            segundo = vara[i];
        }
        else if(vara[i] > terceiro){
            terceiro = vara[i];
        }
        else{
            menor = vara[i];
        }
    }
    }


void teste_lados(int vara[3], int vara[2], int vara[1], int vara[0], int maior, int menor, int segundo, int terceiro){
    if(maior > segundo + terceiro && maior > segundo + menor && maior > terceiro + menor){
        printf("N");
    }
    else{
        printf("S");
    }
}

int main(void){
    int vara[3];
    int i, maior, menor, segundo, terceiro;
    maior = 0;
    menor = 0;
    segundo = 0;
    terceiro = 0;
    
    scanf("%d %d %d %d", &vara[0], &vara[1], &vara[2], &vara[3]);
    
    maior_lado(vara[3], vara[2], vara[1], vara[0], maior, i, menor, segundo, terceiro);
    
    teste_lados(vara[3], vara[2], vara[1], vara[0], maior, menor, segundo, terceiro);
    
    return 0;
}
