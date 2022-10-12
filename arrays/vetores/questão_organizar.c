//inacabada, fazer issue pra acabar

#include <stdio.h>

int main(){
    int i;
    int rows;
    
    scanf("%d", &rows);

    int sequencia[rows];

    for(i = 0; i < rows; i++){
        scanf("%d", &sequencia[i]);
    }
    for(i = 0; i< rows; i++){
        for(i = 0; i < rows; i++){
            printf("%d", sequencia[i]);
        }
        printf("\n");
    }
    return 0;
}
