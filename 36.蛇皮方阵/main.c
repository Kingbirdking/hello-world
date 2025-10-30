#include <stdio.h>
int main()
{
    int n,i,j,k=3,t;
    do
    {
    t=1;
    printf("输入方阵边长:");
    if (scanf("%d",&n)!=1 || n<=0 || n>1000)
    {
        puts("边长非法！");
        t=0;
    }
    }
    while(t==0);
    int a[n][n];
    for(i=1;i<=n;i++)
        for(j=1;j<=i;j++)
        a[i-j][j-1]=t++;
    for(i=1;i<=n-1;i++)
        for(j=1;j<=n-i;j++)
        a[i+j-1][n-j]=t++;

    while(t!=0)
    {
        t/=10;
        k++;
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            printf("%*d",k,a[i][j]);
        printf("\n");
    }
    return 0;
}
