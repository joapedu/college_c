#include <stdio.h>

void bubleSort(int, int[]);
int contains(int, int[], int);
void printArray(int, int[]);
void atribuirValorPadrao(int, int[]);
void imprimirDiferencaSimetrica(int, int, int[], int[]);

int main(void) {
  int n, m;
  scanf("%d %d", &n, &m);

  int array1[n], array2[m];

  for (int i = 0; i < n; i++) {
    scanf("%d", &array1[i]);
  }

  for (int i = 0; i < m; i++) {
    scanf("%d", &array2[i]);
  }

  imprimirDiferencaSimetrica(n, m, array1, array2);
}

int contains(int n, int array[n], int value) {
  for (int i = 0; i < n; i++) {
    if (array[i] == value)
      return 1;
  }
  return 0;
}

void bubleSort(int n, int array[n]) {
  int troca;
  do {
    troca = 0;
    for (int i = 1; i < n; i++) {
      if (array[i - 1] > array[i]) {
        int aux = array[i - 1];
        array[i - 1] = array[i];
        array[i] = aux;
        troca++;
      }
    }
    if (troca == 0)
      break;
  } while (1);
}

void atribuirValorPadrao(int n, int array[n]) {
  for (int i = 0; i < n; i++) {
    array[i] = 666;
  }
}

void printArray(int n, int array[n]) {
  int inicio = 1;
  for (int i = 0; i < n; i++) {
    if (array[i] == 666)
      continue;
    if (inicio) {
      printf("%d", array[i]);
      inicio = 0;
    } else {
      printf(" %d", array[i]);
    }
  }
  printf("\n");
}

void imprimirDiferencaSimetrica(int n, int m, int array1[n], int array2[m]) {

  int dif[n + m];

  atribuirValorPadrao(n + m, dif);

  for (int i = 0; i < n; i++) {
    if (!contains(m, array2, array1[i])) {
      dif[i] = array1[i];
    }
  }

  for (int i = 0; i < m; i++) {
    if (!contains(n, array1, array2[i])) {
      dif[i + n] = array2[i];
    }
  }

  bubleSort(n + m, dif);

  printArray(n + m, dif);

  printf("\n");
}
