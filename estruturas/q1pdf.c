// https://www.facom.ufu.br/~backes/wordpress/ListaC06.pdf

#include <stdio.h>

typedef struct {
   int hora, minuto, segundo;
} horario;

typedef struct{
    int dia, mes, ano
} datas;

typedef struct{
    int diacom, mescom, anocom;
    char evento[50]
} compromissos;



int main(void){
    int i;

    horario hora;
    datas data;
    compromissos compromisso;

    scanf("%d:%d:%d", &hora.hora, &hora.minuto, &hora.segundo);
    

    


    return 0;
}
