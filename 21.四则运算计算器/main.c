#include <stdio.h>
int main()
{
    double a,b;
    char o;
    printf("输入格式为:数字符号数字\n");
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
            printf("除数不可为0");
        else
            printf("%g",a/b);
         break;
    default:printf("运算符错误！");
    }
    return 0;
}

