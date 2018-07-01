#include <stdio.h>
 
int main(void)
{
    int n;
    scanf("%d", &n);
    n--;
    while(n != -1)
    {
        printf("%d\n", n);
        n--;
    }
}
