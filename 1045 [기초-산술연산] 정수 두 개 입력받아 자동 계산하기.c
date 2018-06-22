#include  <stdio.h>
int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	
	printf("%d\n", a + b);
	printf("%d\n", a - b);
	printf("%d\n", a * b);
	printf("%d\n", a / b);
	printf("%d\n", a % b);
	printf("%.2f\n", (float)a / (float)b);
}
