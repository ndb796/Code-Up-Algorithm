#include <stdio.h>
 
int main(void) {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if(a%2==0)
		printf("%s\n", "even");
	else
		printf("%s\n", "odd");
	if(b%2==0) 
		printf("%s\n", "even");
	else
		printf("%s\n", "odd");
	if(c%2==0)
		printf("%s\n", "even"); 
	else
		printf("%s\n", "odd");	
}
