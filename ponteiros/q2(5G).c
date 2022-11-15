#include <stdio.h>

int get_range(int n, int cells[n], int d, int u, int *left_index, int *right_index, int i){
    int auxmaior = u + d;   //maior distancia de sinal
    int auxmenor = u - d;   //menor distancia de sinal

    for(i = 0; i < n; i++){
    scanf("%d", &cells[i]); //scaneia a distancia de sinal
        if(cells[i] < auxmaior && cells[i] > auxmenor){
            printf("%d", cells[i]);
        }
    }
}

int main(void){
    int n, d, u, i;
    scanf("%d %d %d", &n, &d, &u);
    int cells[n], *left_index, *right_index;
    
    int auxmaior = u + d;   //maior distancia de sinal
    int auxmenor = u - d;   //menor distancia de sinal

    int desconectado = 0;  // auxiliar para usuario desconectado

    for(i = 0; i < n; i++){
    scanf("%d", &cells[i]); //scaneia a distancia de sinal
        if(cells[i] < auxmaior && cells[i] > auxmenor){
            printf("%d ", cells[i]);
        }
        else if(cells[i] > auxmaior && cells[i] < auxmenor){
            desconectado += 1;
        }
    }
    int lixo;
    if(n != desconectado){
        lixo += 1;
    }
    else if(desconectado = n){
        printf("USUARIO DESCONECTADO");
    }

    return 0;
}
