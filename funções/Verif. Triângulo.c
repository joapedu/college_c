//cabeçalho
#include <stdio.h>
#include <math.h>

//funções
void teste_lados(int A, int B, int C){
    if(A == B && B == C){
        printf("Equilátero\n");
    }
    else if(A == B || B == C || A == C){
        printf("Isóceles\n");
    }
    else if(A != B && B != C){
        printf("Escaleno\n");
    }
}
void teste_angulo(int A, int B, int C){
    if(A = B + C){
        printf("Retângulo\n");
    }
    else if(A > B + C){
        printf("Obstusângulo\n");
    }
    else if(A < B + C){
        printf("Acutângulo\n");
    }
}

//codigo main
int main(void){
    int i;
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);
    if(A > B + C || B > A + C || C > A + B){
        printf("Não é um triângulo válido\n");
    }
    else{
        teste_angulo(A, B, C);
        teste_lados(A, B, C);
    }
    return 0;
}
