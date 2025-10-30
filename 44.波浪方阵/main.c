#include <stdio.h>
void main()
{
    int i=0,j=0,n,t=0,k,p;
    printf("Input the side length (A positive integer between 1 and 50): ");
    do
    {
    k=1;
    if((scanf("%d",&n)==0)||((n<=0)||(n>50)))
    {
        k=0;
        printf("Invalid input !\nPlease input again(a positive integer between 1 and 50): ");
        getchar();
    }
    }
    while(k==0);
    int a[n][n];
    a[i][j]=++t;//第一个数字
    while(t!=n*n)
    {
    j+=1;
    a[i][j]=++t;//下移1
    for(p=k;p!=0;p--)//右移k
    {
        i+=1;
        a[i][j]=++t;
    }
    for(p=k;p!=0;p--)//上移k
    {
        j-=1;
        a[i][j]=++t;
    }
    k++;//增k
    if(k==n)
        break;
    i+=1;
    a[i][j]=++t;//右移1
    for(p=k;p!=0;p--)//下移k
    {
        j+=1;
        a[i][j]=++t;
    }
    for(p=k;p!=0;p--)//左移k
    {
        i-=1;
        a[i][j]=++t;
    }
    k++;//增k
    if(k==n)
        break;
    }
    k=1;
    while(t!=0)
    {
        t/=10;
        k++;
    }
    puts("The spiral matrix is:");
     for(j=0;j<n-1;j++)
     {
         for(i=0;i<n;i++)
            printf("%-*d",k,a[i][j]);
         printf("\n");
     }
     for(i=0;i<n;i++)
            printf("%-*d",k,a[i][j]);
        printf("\nThank you for using this program!");
}
