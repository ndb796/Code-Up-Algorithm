#include <stdio.h>
 
int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	int c = 1;
	for(int i = 1; i <= b; i++) {
		c *= 2;
	}
	printf("%d", a * c);
}
