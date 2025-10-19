#include <stdio.h>
int main()
{
    int x,t,l,f;
    printf("请输入头的总数:");
    scanf("%d",&t);
    printf("请输入腿的总数:");
    scanf("%d",&l);
    x=0,f=0;
    while(4*x<=l)
    {
        if((2*x+2*t==l)&&(t-x>=0))
            {
            f=1;
            printf("兔有%d只",x);
            printf("鸡有%d只",t-x);
            }
        x++;
    }
    if(f==0)
        printf("无解！");
    return 0;
}
