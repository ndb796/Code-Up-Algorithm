#include <stdio.h>
 
int main(void)
{
    int a;
    scanf("%d", &a);
    int sum = 0;
    for(int i = 1; i <= a; i++)
    {
        if(i % 2 == 0)
            sum = sum + i;
    }
    printf("%d", sum);
}
