#include <stdio.h>

int soma(int a, int b, int sum) {
  sum = a + b;
  return sum;
}

int main() {

  int a, b, sum;

  scanf("%d", &a);
  scanf("%d", &b);

  sum = soma(a,b,sum);

  printf("SOMA = %d", sum);
  printf("\n");

return 0;
}
