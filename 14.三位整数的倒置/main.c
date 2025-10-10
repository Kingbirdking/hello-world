#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,d,e,f,g;
    scanf("%d",&a);
    a=abs(a);
    b=a%10;
    c=a/10;
    d=c%10;
    e=c/10;
    f=e%10;
    g=100*b+10*d+f;
    if(a<0);
    g=-g;
    printf("%d\n",g);
    return 0;
}
