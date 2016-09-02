#include <stdio.h>

int soma(int a, int b, int x) {

	x = a + b;

	return x;
}

int main() {

int a = 0, b = 0, x = 0;

scanf("%d", &a);
scanf("%d", &b);

x = soma(a,b, x);

printf("X = %d \n", x);

return 0;
}
