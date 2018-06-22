#include <stdio.h>

int main()
{
	char input[100];
	scanf("%s", input);
	int i;
	for(i = 0; input[i] != '\0'; i++)
		printf("\'%c\'\n", input[i]);
	return 0;
}
