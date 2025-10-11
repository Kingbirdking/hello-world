#include <stdio.h>
int main()
{
    double a,b;
    printf("\n请输入基本工资:");
    scanf("%lf",&a);
    /*超过1000元的部分扣除5%个人所得税*/
    b=(a<=1000)?0:0.05;
    a=a-(a-1000)*b;
    printf("税后工资为:%7.2f\n",a);
    return 0;
}
