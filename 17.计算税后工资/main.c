#include <stdio.h>
int main()
{
    double a,b;
    printf("\n�������������:");
    scanf("%lf",&a);
    /*����1000Ԫ�Ĳ��ֿ۳�5%��������˰*/
    b=(a<=1000)?0:0.05;
    a=a-(a-1000)*b;
    printf("˰����Ϊ:%7.2f\n",a);
    return 0;
}
