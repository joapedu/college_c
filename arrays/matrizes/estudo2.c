//multiplicação

#include <stdio.h>
#include <math.h>

#define TAM1 3
#define TAM2 2

int main(void){
    int matriz1[TAM1][TAM1], matriz2[TAM1][TAM1], matriz3[TAM1][TAM2];
    int i, j;

    for(i=0; i<TAM1; i++){
        for(j=0; j<TAM1; j++){
            scanf("%d", &matriz1[i][j]);
        }
    }
    for(i=0; i<TAM1; i++){
        for(j=0; j<TAM1; j++){
            scanf("%d", &matriz2[i][j]);
        }
    }
    for(i=0; i<TAM1; i++){
        for(j=0; j<TAM2; j++){
            scanf("%d", &matriz3[i][j]);
        }
    }
    
    //multiplicação entre matrizes segue a matemática
    /* 
    MAT1[2][3*] x MAT2[3*][2]  (os "*" tem que ser iguais!)
    1  2  3     x    7  8   =   (1*7)+(1*3)+(1*-2)= 8  e (3*8)+(3*4)+(3*3)= 45
    3  2  1          3  4   =   (2*7)+(2*3)+(2*-2)= 16 e (2*8)+(2*4)+(2*3)= 30
                    -2  3   =   (3*7)+(3*3)+(3*-2)= 24 e (1*8)+(1*4)+(1*3)= 15
    
    RESULTADO =     8   45
                    16  30
                    24  15
    */
   


    return 0;
}
