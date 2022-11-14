#include <stdio.h>
#include <string.h>

void uniao(int t1, int t2, int t3, int vetor1[t1], int vetor2[t2], int vetor3[t3], int i, int j){
    for(i = 0; i < t1; i++){
        vetor3[i] = vetor1[i];
    }

    for(j = 0; j < t2; j++){
        vetor3[t1 + j] = vetor2[j];
    }
}

void intersecao(int t1, int t2, int vetor1[t1], int vetor2[t2], int vetor4[20], int i, int j){
    if(t1 > t2){
        for(i = 0; i < t1; i++){
            if(vetor1[i] == vetor2[i]){
                vetor4[i] = vetor1[i];
            }
        }
    }
    else if(t2 > t1){
        for(j = 0; j < t2; j++){
            if(vetor1[i] == vetor2[i]){
                vetor4[i] = vetor1[i];
            }
        }
    }
}

int main(){
    int t1, t2;
    scanf("%d", &t1);
    
    int vetor1[t1];

    int i;
    for(i = 0; i < t1; i++){
        scanf("%d", &vetor1[i]);
    }

    scanf("%d", &t2);
    int vetor2[t2];

    int j;
    for(j = 0; j < t2; j++){
        scanf("%d", &vetor2[i]);
    }

    int t3;
    t3 = t1 + t2;
    int vetor3[t3];
    uniao(t1, t2, t3, vetor1, vetor2, vetor3, i, j);


    printf("A união B == ");

    if(t1 > t2){
        for(i = 0; j < t1; j++){
            if(vetor1[i] == vetor2[i]){
                t3 = t3 - 1;
        }
        }
    }
    else if(t2 > t1){
        for(j = 0; j < t2; j++){
            if(vetor2[i] == vetor1[i]){
                t3 = t3 - 1;
        }
        }
    }

    for(i = 0; i < t3; i++){
        printf("%d", vetor3[i]);
    }
    printf("\n");
    

    int vetor4[20];
    intersecao(t1, t2, vetor1, vetor2, vetor4, i, j);

    printf("A interseção B == ");
    for(i = 0; i < t3; i++){
        printf("%d", vetor3[i]);
    }

    return 0;
}
