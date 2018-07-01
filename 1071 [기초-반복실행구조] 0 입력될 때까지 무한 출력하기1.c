#include <stdio.h>
 
int main(void)
{
    int a;
    reload:
        scanf("%d", &a);
        printf("%d\n", a);
    if(a != 0)
        goto reload;
}
