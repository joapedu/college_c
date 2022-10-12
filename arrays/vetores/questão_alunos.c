#include <stdio.h>

void atribuirValorPadrao(int, float[]);
void imprimirNotas(int, float[], float[], float[]);
void imprimirSequenciaNotas(int, float[]);

int main(void) {

  int n;
  scanf("%d", &n);

  float notas[n];
  float aprovados[n];
  float reprovados[n];
  float recuperacao[n];

  atribuirValorPadrao(n, notas);
  atribuirValorPadrao(n, aprovados);
  atribuirValorPadrao(n, reprovados);
  atribuirValorPadrao(n, recuperacao);

  for (int i = 0; i < n; i++) {
    int lixo;
    scanf("%d - %f", &lixo, &notas[i]);

    if (notas[i] < 5) {
      reprovados[i] = notas[i];
    } else if (notas[i] >= 7) {
      aprovados[i] = notas[i];
    } else {
      recuperacao[i] = notas[i];
    }
  }

  imprimirNotas(n, aprovados, reprovados, recuperacao);
  return 0;
}

void atribuirValorPadrao(int n, float array[n]) {
  for (int i = 0; i < n; i++) {
    array[i] = -1;
  }
}

void imprimirNotas(int n, float aprovados[n], float reprovados[n],
                   float recuperacao[n]) {
  printf("Aprovados: ");
  imprimirSequenciaNotas(n, aprovados);

  printf("Recuperação: ");
  imprimirSequenciaNotas(n, recuperacao);

  printf("Reprovados: ");
  imprimirSequenciaNotas(n, reprovados);
}

void imprimirSequenciaNotas(int n, float array[]) {
  int isInicio = 1;
  for (int i = 0; i < n; i++) {
    if (array[i] == -1)
      continue;
    
    if(isInicio) {
      printf("%d (%.1f)", (i + 1), array[i]);
      isInicio = 0;
    } else {
      printf(", %d (%.1f)", (i + 1), array[i]);
    }
  }
  printf("\n");
}
