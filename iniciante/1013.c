#include <stdio.h>

int main() {

	int a[3], maior, i;

	
	for(i=0;i<3;i++)
		scanf("%d", &a[i]);

	maior = a[0];
	for(i=1;i<3;i++) {
		if (a[i] > maior)
			maior = a[i];
	}

	printf("%d eh o maior", maior);
	printf("\n");

return 0;
}
