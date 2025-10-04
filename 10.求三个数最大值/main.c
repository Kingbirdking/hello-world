#include <stdio.h>
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    if(b>a)
        a=b;
    if(c>a)
        a=c;
    printf("%f",a);
    return 0;
}
