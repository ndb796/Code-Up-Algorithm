#include <stdio.h>
 
int main(void) {
	int a, b;
	scanf("%d %d", &a, &b);
	if(a != b)
		printf("%d", 1);
	else
		printf("%d", 0);
}
