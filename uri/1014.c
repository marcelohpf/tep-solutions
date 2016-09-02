#include <stdio.h>

int main() {

	int x;
	double y;

	scanf("%d", &x);
	scanf("%lf", &y);

	printf("%.3lf km/l", (double)x/y);
	printf("\n");
	return 0;
}