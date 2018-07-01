#include <stdio.h>
 
int main(void)
{
    int a;
    scanf("%d", &a);
    if(a >= 90 && a < 100)
        printf("A");
    else if(a >= 70 && a < 90)
        printf("B");
    else if(a >= 40 && a < 70)
        printf("C");
    else
        printf("D");
}
