#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a,b;
    printf("\n");
    a=getchar();
    fflush(stdin);
    b=getchar();
    fflush(stdin);
    putchar(a);
    putchar(b);
    putchar('\n');
    return 0;
}
