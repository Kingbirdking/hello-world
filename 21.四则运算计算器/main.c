#include <stdio.h>
int main()
{
    double a,b;
    char o;
    printf("�����ʽΪ:���ַ�������\n");
    scanf ("%lf%c%lf",&a,&o,&b);
    switch(o)
    {
    case'+':printf("%g",a+b);
         break;
    case'-':printf("%g",a-b);
         break;
    case'*':printf("%g",a*b);
         break;
    case'/':
        if (b==0)
            printf("��������Ϊ0");
        else
            printf("%g",a/b);
         break;
    default:printf("���������");
    }
    return 0;
}

