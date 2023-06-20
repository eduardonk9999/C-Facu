#include <stdio.h>

int main() {
  int parar = 0;
  float nota;

  printf("\n Digite a nota do aluno: ");
  scanf("%f", &nota);

  while(parar != 1) {
    if(nota < 0 || nota > 10) {
      printf("\n Nota invalida! Digite novamente: ");
      scanf("%f", &nota);
    } else {
      printf("\n Nota valida!");
      parar = 1;
    }
  }

  return 0;
}