#include <stdio.h>
int main()
{
    int i,j,k,m,n;
    char c;
    tp:
    printf("���������εĿ��:");
    if (scanf("%d",&m)==0)
        {
        printf("���������֣�");
        goto tp;
        }
    else if(m<2)
        {
        printf("�뻻һ����С��2�����֣�");
        goto tp;
        }
    else if(m%2!=0)
    {
         n=(m+1)/2;
       for(i=1;i<=n;i++)
       {
           for(j=1;j<=n-i;j++)
           printf(" ");
           for(k=1;k<=2*i-1;k++)
           printf("*");
           printf("\n");
        }
      for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        printf(" ");
    for(k=1;k<=m-2*i;k++)
        printf("*");
    printf("\n");
    }
    }
    else if(m%2==0)
    {
        n=m/2;
       for(i=1;i<=n;i++)
       {
           for(j=1;j<=m/2-i;j++)
               printf(" ");
           for(k=1;k<=2*i;k++)
               printf("*");
           printf("\n");
        }
      for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        printf(" ");
    for(k=1;k<=m-2*i;k++)
        printf("*");
    printf("\n");
    }
    }
    printf("����Ҫ���������𣿣�Y/N��\n");
    scanf(" %c",&c);
    if((c=='y')||(c=='Y'))
        goto tp;
    return 0;
}
