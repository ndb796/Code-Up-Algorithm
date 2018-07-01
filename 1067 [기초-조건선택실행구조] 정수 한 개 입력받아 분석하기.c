#include <stdio.h>
 
int main(void) {
	int a;
	scanf("%d", &a);
	if(a >= 0) printf("%s\n", "plus");
	else printf("%s\n", "minus");
	if(a%2 == 0) printf("%s\n", "even");
	else printf("%s\n", "odd");
}
