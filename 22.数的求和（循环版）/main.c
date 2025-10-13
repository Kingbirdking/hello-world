#include <stdio.h>
int main()
{
    int i,a,sum=0;
    i=1;
    printf("请输入最大值:");
    scanf("%d",&a);
    while(i<=a)
    {
        sum=sum+i;
        i++;
    }
    printf("\n%d",sum);
    return 0;
}
