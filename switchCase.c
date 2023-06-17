#include <stdio.h>

int main() {
  int n;

  printf("\n(1) para Saldo\n(2) para Extrato\n(3) para o saque\n(4) para Sair");
  printf("\nInforme a operacao desejada: ");

  scanf("%d", &n);

  switch(n) {
    case 1:
      printf("\nSaldo");
      break;
    case 2:
      printf("\nExtrato");
      break;
    case 3:
      printf("\nSaque");
      break;
    case 4:
      printf("\nSair");
      break;
    default:
      printf("\nOpcao invalida");
     
  }

  return 0;


}