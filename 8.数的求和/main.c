#include <stdio.h>

int main()
{int i,s;
     s=0;
     i=1;
     int sb;
     printf("输入最大值:");
     scanf("%d",&sb);
     while(i<=sb)
           {
               s=s+i;
               i=i+1;
           }
    printf("从1加到最大值的和为:%d",s);
    return 0;
}
