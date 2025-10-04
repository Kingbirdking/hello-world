#include <stdio.h>

int main()
{
    float a,b,c,d;
    printf("请输入三个数字（用逗号隔开）");
    scanf("%f,%f,%f",&a,&b,&c);
    if(b>a)
    {
    d=b;
    b=a;
    a=d;
    }
    if(c>a)
    {
    d=c;
    c=a;
    a=d;
    }
    if(c>b)
    {d=b;
    b=c;
    c=d ;
    }
    printf("%f>%f>%f",a,b,c);
    return 0;
}

