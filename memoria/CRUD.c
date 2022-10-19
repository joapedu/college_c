//CRUD, criar, ler, atualizar e deletar 
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(){
    
    char nome[40];
    int i, j, idade;
    char sexo, crud;
    char lixo[20];
    
    scanf("%c", crud);
    
    if(crud == 'p'){
    }
    
    else if(crud == 'd'){
    }
    
    else if(crud == 'i'){
        fgets(nome, 20, stdin);
        scanf("%d", &idade);
        scanf("c", &sexo);
        printf("%c,%d,%c", nome[20], idade, sexo);
    }
    return 0;
}
