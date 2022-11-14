#include <stdio.h>

typedef struct
{
    char nome[50];
    int idade;
    char end[100];
} leitura;

int main(void)
{
    int i, repet;

    leitura pessoa;

    scanf("%s", pessoa.nome[50]);
    scanf("%d", &pessoa.idade);
    scanf("%s[^\n]", pessoa.end[100]);

    printf("nome: %s\nidade: %d\nendereço: %s", pessoa.nome[50], pessoa.idade, pessoa.end[100]);

    return 0;
}
