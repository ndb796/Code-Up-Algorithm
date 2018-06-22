#include <stdio.h>
#include <string.h>

int main()
{
	char a[15];
	scanf("%s", &a);
	int length;
	length = strlen(a);
	int i;
	for(i = 0; i < length; i++)
	{
		if(a[i] == '-')
			;
		else
			printf("%c", a[i]);
	}
	return 0;
}
