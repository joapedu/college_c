#include <stdio.h>

int main(void){
    int t1;
    scanf("%d", &t1);
    int vetor1[t1];

    int i;
    for(i = 0; i < t1; i++){
        scanf("%d", &vetor1[i]);
    }   //vetor1 recebendo os valores

    int t2;
    scanf("%d", &t2);
    int vetor2[t2];

    int j;
    for(j = 0; j < t2; j++){
        scanf("%d", &vetor2[i]);
    }   //vetor 2 recebendo valores

    int t3;
    t3 = t1 + t2;
    int vetor3[t3];

    for(i = 0; i < t1; i++){
        vetor3[i] = vetor1[i];
    }   //colocando a primeira parte no vetor união

    for(j = 0; j < t2; j++){
        vetor3[t1 + j] = vetor2[j];
    }   //colocando a segunda parte no vetor união
    
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
            if(vetor1[i] == vetor2[i]){
                t3 = t3 - 1;
        }
        }
    }    //união
    for(i = 0; i < t3; i++){

    }
    if(t1 > t2){
        for(i = 0; j < t1; j++){
            if(vetor1[i] == vetor2[i]){
                t3 = t3 - 1;
        }
        }
    }
    else if(t2 > t1){
        for(j = 0; j < t2; j++){
            if(vetor1[i] == vetor2[i]){
                t3 = t3 - 1;
        }
        }
    }
    
    int vetor4[20]; //declarando intersecao

    if(t1 > t2){
        for(i = 0; i < t1; i++){
            if(vetor1[i] == vetor2[i]){
                vetor4[i] == vetor1[i];
            }
        }
    }
    if(t2 > t1){
        for(j = 0; j < t2; j++){
            if(vetor1[i] == vetor2[i]){
                vetor4[i] == vetor1[i];
            }
        }
    }

    return 0;
}
