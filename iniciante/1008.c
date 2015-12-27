#include <stdio.h>

int main() {

  int func, hora;
  double valor, salario;

  scanf("%d", &func);
  scanf("%d", &hora);
  scanf("%lf", &valor);

  salario = valor * hora;

  printf("NUMBER = %d", func);
  printf("\n");
  printf("SALARY = U$ %.2lf", salario);
  printf("\n");

  return 0;
}
