//NÃO FINALIZADA!

//URI 1160

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//função para crecimento
void crescimento_populacional(int PA, int PB, int contador, float G1, float G2, float auxG1, float auxG2){
    auxG1 == G1;
    auxG2 == G2;
    while(PB >= PA){
        G1 = PA / 100 * auxG1;
        G2 = PB / 100 * auxG2;
        PA = PA + G1;
        PB = PB + G2;
        contador++;
    }
    if(contador < 100){
        printf("%d Anos.\n", contador);
    }
    else{
        printf("Mais de 1 século\n");
    }
}


int main(void){
    int i, T, PA, PB, contador;
    float G1, G2, auxG1, auxG2;
    
    scanf("%d", &T);

    for(i = 0; i < T; i++){
        scanf("%d %d %f %f", &PA, &PB, &G1, &G2);
        crescimento_populacional(PA, PB, contador, G1, G2, auxG1, auxG2);
    }
    return 0;
}
