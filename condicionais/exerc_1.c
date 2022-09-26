//cabeçalho
#include <stdio.h>

//codigo
int main(){
//variáveis
    float nota1;
    float nota2;
    float nota3;
    scanf("%f %f %f", nota1, nota2, nota3);

//declarar a media
    float media;
    media = (nota1 + nota2 + nota3)/3;
    
//if se x>7
    if(media >= 7.0){
        printf("Você está aprovado!");
    }

//if se x<3
    else if(media < 3.0){
        printf("Nos veremos novamente semestre que vem 0_0");
    }

//if se x>=5 sem nenhuma nota menor que 3
    else if(media >= 5.0 && nota1 >= 3.0 && nota2 >= 3.0 && nota3 >= 3.0){
        printf("Escapou Fedendo!");
    }

//else reposição
    else if(media < 5 && nota1 >= 3.0 && nota2 >= 3.0 && nota3 >= 3.0){
        float nota4;
        scanf("%f", nota4);
        float novamedia;
        novamedia = (nota1 + nota2 + nota3 + nota4)/4;
        if(novamedia >= 5.0 && nota4 >= 3.0){
            printf("Passou na recuperação!");
        }
    }

    return 0;
}
