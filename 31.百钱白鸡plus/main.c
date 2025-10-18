#include <stdio.h>
int main()
{
    int a,b,c,n,m,f;
    char c;
    printf("请输入鸡数:");
    scanf("%d",&n);
    printf("请输入钱数:");
    scanf("%d",&m);
    a=0,f=0;
    while((a<=m/5)&&(a<=n))
    {
    if((3*m-n-14*a)%8==0)
        {
            b=(3*m-n-14*a)/8;
        c=n-a-b;
        if(b>=0)
            f=1;
            printf("可以是\n公鸡有%d只\n母鸡有%d只\n小鸡有%d只\n",a,b,c);
        }
        a++;
    }
    if(f==0)
        printf("问题无解！");
    printf("此次问题解决完毕,是否继续(Y/N)?")
    scanf("%c",c);
    if((c==Y)||(c==y))
    {
        gerchar
    }
    return 0;
}
