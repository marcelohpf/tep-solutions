#include <stdio.h>

int main() {

	int tempo, vm;
	double litros;

	scanf("%d", &tempo);
	scanf("%d", &vm);

	litros  = (double)(tempo * vm)/12;

	printf("%.3lf", litros);
	printf("\n");

	return 0;
}