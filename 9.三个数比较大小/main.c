#include <stdio.h>

int main()
{
    float a,b,c,d;
    printf("�������������֣��ö��Ÿ�����");
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
    if(b>c)
    {d=b;
    b=c;
    c=d ;
    }
    printf("%f>%f>%f",a,b,c);
    return 0;
}
