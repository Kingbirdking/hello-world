#include <stdio.h>
#include <stdlib.h>

int main()
{
    float pi=3.14159;
    int s,r=5;
    s=r*r*pi;
    printf("s=%d\n",s);
    int a=2;
    (double)(a+5);/*强制转换成双精度*/
    printf("a+5=%d",a+5);
    return 0;
}
