#include <stdio.h>
int main()
{
    int n,k;
    do
    {
        k=1;
        printf("Inter the number:");
    if((scanf("%d",&n)==0)||((n<0)||(n>1000)))
        {
            puts("边长非法:");
            k=0;
        }
    }
    while(k==0);
    int a[n][n],i,j,t=2;
    for(j=0;j<n;j++)
            for(i=0;i<n;i++)
                  a[j][i]=(j+1)*(i+1);
    while(k!=0)
    {
        k/=10;
        t++;
    }
    for(j=0;j<=n-1;j++)
    {
        printf("\n");
        for(i=0;i<n;i++)
             printf(" %-*d",t,a[j][i]);
    }
    return 0;
}
