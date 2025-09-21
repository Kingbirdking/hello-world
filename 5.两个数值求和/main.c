#include <stdio.h>

int add(int x,int y)
     {
      return(x+y);
     }

int main()
{
    int a,b,sum;
    printf("input a and b:");
    scanf("%d%d",&a,&b);
    sum=add(a,b);
    printf("sum= %d+%d= %d\n",a,b,sum);
    return 0;
}
