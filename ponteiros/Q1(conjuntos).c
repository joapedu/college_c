//questão 1 lop.natalnet.br
#include <stdio.h>
#include <string.h>

void uniao(int t1, int t2, int t3, char string1[t1], char string2[t2], char string3[t3], int i, int j){
    for(i = 0; i < t1; i++){
        string3[i] = string1[i];
    }

    for(j = 0; j < t2; j++){
        string3[t1 + j] = string2[j];
    }
}

void intersecao(int t1, int t2, char string1[t1], char string2[t2], char string4[20], int i, int j){
    if(t1 > t2){
        for(i = 0; i < t1; i++){
            if(string1[i] == string2[i]){
                string4[i] == string1[i];
            }
        }
    }
    if(t2 > t1){
        for(j = 0; j < t2; j++){
            if(string1[i] == string2[i]){
                string4[i] == string1[i];
            }
        }
    }
}

int main(){
    int t1, t2;
    scanf("%d", &t1);
    
    char string1[t1];

    int i;
    for(i = 0; i < t1; i++){
        scanf("%d", string1[i]);
    }

    scanf("%d", &t2);
    char string2[t2];

    int j;
    for(j = 0; j < t2; j++){
        scanf("%d", string2[i]);
    }

    int t3;
    t3 = t1 + t2;
    char string3[t3];

    uniao(t1, t2, t3, string1, string2, string3, i, j);
    printf("A união B == %c\n", string3);

    char string4[20]; 
    intersecao(t1, t2, string1[t1], string2[t2], string4[20], i, j);
    printf("A interseção B == %c", string4);

    return 0;
}

//trocar por fgets e ver oq da
