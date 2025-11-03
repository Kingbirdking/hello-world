#include <stdio.h>
long f1(int p,int n)
{
    int k,i;
    long r;
    long f2(int);
    k=p;
    for(i=1;i<n;i++)
    k*=p;
    r=f2(k);
    return r;
}
long f2(int q)
{
    long c=1;
    int i;
    for(i=1;i<=q;i++)
    {
        c*=i;
    }
    return c;
}
int main()
{
    long i,s,n;
    puts("请输入底数:");
    scanf("%ld",&i);
    puts("请输入指数:");
    scanf("%ld",&n);
        s=f1(i,n);
    printf("%ld的%ld次方的阶乘为%1d\n",i,n,s);
    return 0;
}
