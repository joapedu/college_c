#include <stdio.h>

int main(void){

    //definindo a estrura e os elementos de dentro
    struct horario
    {
    int horas;
    int minutos;
    int segundos;
    };

    //anunciar e atribuir variavel pra linkar elemento
    struct horario agora;
    
    //definir valores (Nome.ElementoDeDentro)
    agora.horas = 15;
    agora.minutos = 17;
    agora.segundos = 30;

    //imprimindo 
    printf("%i:%i:%i\n", agora.horas, agora.minutos, agora.segundos);

    //manipulando estrutruras com outras
    struct horario depois; //anunciando
    depois.horas = agora.horas + 10;
    

    return 0;
}
