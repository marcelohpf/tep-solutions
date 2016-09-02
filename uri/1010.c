#include <stdio.h>
#include <stdlib.h>

typedef struct Peca {
	int codigo;
	int numero;
	double valor;
}Peca;

int main() {
	
	double pagar;
	Peca *peca;

	peca = malloc (sizeof (Peca));

	scanf("%d", &peca[0].codigo);
	scanf("%d", &peca[0].numero);
	scanf("%lf", &peca[0].valor);

	scanf("%d", &peca[1].codigo);
	scanf("%d", &peca[1].numero);
	scanf("%lf", &peca[1].valor);

	pagar = peca[0].numero * peca[0].valor + peca[1].numero * peca[1].valor;

	printf("VALOR A PAGAR: R$ %.2lf", pagar);
	printf("\n");

  return 0;
}
