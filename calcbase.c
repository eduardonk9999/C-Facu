#include <stdio.h>

int main() {
  int idade1 = 0;
  int idade2 = 0;
  int resultado = 0;

  printf("\n Digite a idade 1: ");
  scanf("%d", &idade1);
  printf("\n Digite a idade 2: ");
  scanf("%d", &idade2);

  resultado = idade1 + idade2;

  printf("\n Resultado = %d", resultado);
}

