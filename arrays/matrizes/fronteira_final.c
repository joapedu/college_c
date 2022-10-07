//atividade faculdade lop.br

#include <stdio.h>
#include <math.h>

void tipo_planeta_i(int i, int agua, int hostil, int deserto, int vegetação, int ruim){
    switch(i){
        case ~ :
        agua += 1; break;
        case X:
        hostil == 1; break;
        case ^:
        deserto += 1; break;
        case *:
        vegetação += 1; break;
        case .:
        ruim += 1; break;
    }
}

void tipo_planeta_j(int j, int agua, int hostil, int deserto, int vegetação, int ruim){
    switch(j){
        case ~ :
        agua += 1; break;
        case X:
        hostil == 1; break;
        case ^:
        deserto += 1; break;
        case *:
        vegetação += 1; break;
        case .:
        ruim += 1; break;
    }
}

int main(void){
    int lin, col;
    int i, j;
    char matriz[lin][col];
    int total, agua, hostil, deserto, vegetação, ruim;
    total = lin * col;
    scanf("%d %d", &lin, &col);
    for(i=0; i<lin; i++){
        for(j=0; j<col; j++){
            scanf("%c", &matriz[i][j]);
            tipo_planeta_i(i, agua, hostil,deserto,vegetação,ruim);
            tipo_planeta_j(j, agua, hostil,deserto,vegetação,ruim);
        }
    }
    if(hostil == 1){
        printf("Planeta Hostil");
    }
    else{
        if(agua > total/2 && vegetação > total / 5){
            printf("Planeta Classe M");
        }
        else if(agua > total/1,15){
            printf("Planeta Aquático");
        }
        else if(deserto > total/1,5){
            printf("Planeta Desértico");
        }
        else if(vegetação > total/1,5){
            printf("Planeta Selvagem");
        }
        else{
            printf("Planeta Inóspito");
        }
    }
    return 0;
}
