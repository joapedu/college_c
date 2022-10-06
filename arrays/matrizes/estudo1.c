//dois ou mais índices para referenciar uma posição de armazenamento

/* o código percorre a matriz colocando o [VALOR]
para cada posição da matriz
    
    (para matriz [5])
    int i, j;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            mat[i][j] = [VALOR];
        }
    }
*/

//soma e produto de matrizes


//aqui exemplo prático

#include <stdio.h>

//definir tamanho de exemplo matriz

#define TAM1 3
#define TAM2 2

int main(void){
    
//variáveis
    
    int matriz1[TAM1][TAM1], matriz2[TAM1][TAM2], matriz3[TAM2][TAM2];
    int i, j;

//leitura da matriz pela entrada
    
    for(i=0; i<TAM1; i++){
        for(i=0; i<TAM1; i++){
            scanf("%d", &matriz1[i][j]);
        }
    }
    for(i=0; i<TAM1; i++){
        for(i=0; i<TAM2; i++){
            scanf("%d", &matriz2[i][j]);
        }
    }
    for(i=0; i<TAM2; i++){
        for(i=0; i<TAM2; i++){
            scanf("%d", &matriz3[i][j]);
        }
    }
    return 0;
}
