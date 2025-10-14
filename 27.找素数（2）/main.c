#include <stdio.h>
int main(void)
{
printf("输入0可结束程序!\n");
    int n;
    tp:
    printf("请输入要查验的数字:");
    while (scanf("%d", &n) == 1)
    {
        if(n==0)
            break;
        else if (n < 2)
        {
            printf("请输入大于1的数字!\n");
            goto tp;
        }
     int i,f=1;
     for(i=2;i<=n;i++)
        f= ((n % i == 0)&&(n!=i)) ? 0 : f;
    f? printf("%d是素数\n\n", n) : printf("%d不是素数\n输入0可结束程序\n", n);
    }
    return 0;
}
