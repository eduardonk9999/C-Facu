#include <stdio.h>

int main() {
  int idade;
  printf("\n Digite sua idade: ");
  scanf("%d", &idade);
  if(idade >= 18) {
    printf("\n Voce ja pode tirar a carteira de motorista");
  }

  return 0;
}