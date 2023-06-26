#include <stdio.h>

void main(){
  int salarioLiquido;

  int tabela_inss[] = {
    1100,
    2203.48,
    3305.22,
    6433.57
  };

  int tabela_irrf[] = {
    1903.98,
    2826.65,
    3751.05,
    4664.68
  };
  int salario_bruto = 2300;

  int desconto_inss = 0.0;

  // Criar um for para calcular o desconto do INSS, salarioBruto * aliquota;
  // essa aliquota vai ser dentro do for, vai ser a aliquota do indice do for
  // Validacao dentro do for, salario_bruto <= limite do indice do for
  for(int aliquota = 0; aliquota < 4; aliquota++) {
    if(salario_bruto <= tabela_inss[aliquota]) {
      desconto_inss = salario_bruto * aliquota;
      break;
    }
  }
  printf("Desconto INSS: %d\n", desconto_inss);



  // Criar um for para calcular o desconto do IRRF, salarioBruto * aliquota;
  //base_calculo_ir = salario_bruto - desconto_inss
  // desconto_ir = 0.0
  // Validacao dentro do for, base_calculo_ir <= limite: do indice do for

  int desconto_ir = 0.0;
  int base_calculo_ir = salario_bruto - desconto_inss;
  
  for(int aliquota = 0; aliquota < 4; aliquota++) {
    if(base_calculo_ir <= tabela_irrf[aliquota]){
      desconto_ir = base_calculo_ir * aliquota;
      break;
    }
  }


  // Cálcular o salário líquido
  // salario_liquido = salario_bruto - desconto_inss - desconto_ir

  int salario_liquido = salario_bruto - desconto_inss - desconto_ir;
  
}