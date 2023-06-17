#include <stdio.h>

int main() {
  float orcamento;
  printf("\n Digite o valor do orcamento: ");
  scanf("%f", &orcamento);
  if(orcamento >= 10000) {
    printf("\n Joao e Maria possuem orcamento para uma viagem internacional");
  } else {
    printf("\n Joao e Maria nao possuem orcamento para uma viagem internacional");
  }

  return 0;
}