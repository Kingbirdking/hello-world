#include <stdio.h>
#define N 200
int main()
{
    int i,j,a[N]={0},n;
    do
{
    printf("������׳˵ĵ���:\n");
    scanf("%d",&n);
    if(n>0)
    {
        a[N-1]=1;
    for(i=2;i<=n;i++)
    {
        for(j=N-1;j>0;j--)
        a[j]*=i;
         for(j=N-1;j>0;j--)
         {
             a[j-1]+=a[j]/10;
             a[j] %= 10;
         }
    }
    i=0;
    while(a[i]==0)
        i++;
    printf("�׳˵Ľ��Ϊ:");
    for(j=i;j<N;j++)
    printf("%d",a[j]);
    printf("\n");
    }
    else if(n==0)
        printf("�׳˵Ľ��Ϊ:1\n");
    else
        {
        printf("������Ǹ�������\n");
        i=-1;
        }
}
while(i==-1);
    return 0;
}
