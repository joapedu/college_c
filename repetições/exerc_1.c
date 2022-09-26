#include <stdio.h>
#include <stdio.h>
#include <math.h>

int main(){
    int i, vezes, time_1, time_2, gols;
    char x;
    int det = 0;

    for(i = 1; i <= vezes; i++){
        scanf("%d %c %d %d", &time_1, &x, &time_2, &gols);
        if(gols >= 1){
            det += 1;
        } 
    }
    if(det == 0){
        printf("Perna de Pau");
    }
    else{
        printf("Artilheiro");
    }
    return 0;
}
