#include <stdio.h>

int main()
{int i,s;
     s=0;
     i=1;
     int sb;
     printf("�������ֵ:");
     scanf("%d",&sb);
     while(i<=sb)
           {
               s=s+i;
               i=i+1;
           }
    printf("��1�ӵ����ֵ�ĺ�Ϊ:%d",s);
    return 0;
}
