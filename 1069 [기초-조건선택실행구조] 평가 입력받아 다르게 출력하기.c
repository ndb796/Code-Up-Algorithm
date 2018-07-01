#include <stdio.h>
 
int main(void) {
	char a;
	scanf("%c", &a);
	switch(a) {
		case 'D':
			printf("slowly~");
			break;
		case 'C':
			printf("run!");
			break;
		case 'B':
			printf("good!!");
			break;
		case 'A':
			printf("best!!!");
			break;
		default:
			printf("what?");
	}
}

