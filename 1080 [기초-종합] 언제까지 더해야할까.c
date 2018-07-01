#include <stdio.h>
int main(void) {
	int a, b = 1, sum = 0;
	scanf("%d", &a);
	while(sum < a) {
		sum += b;
		b++;
	}
	printf("%d", b - 1);
}
