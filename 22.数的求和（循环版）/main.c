#include <stdio.h>
int main()
{
    int i,a,sum=0;
    i=1;
    printf("输入相加中最大的那个数:");
    scanf("%d",&a);
    while(i<=a)
    {
        sum=sum+i;
        i++;
    }
    printf("\n%d",sum);
    return 0;
}
