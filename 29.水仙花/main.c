#include <stdio.h>
int main()
{
    int a,k,i,j,m,b,s=0,t;
    printf("������Ҫ�������:");
    scanf("%d",&a);
    m=a;
    j=0;
    for(j=0 ;m%10!=0;j++)
    {
            b=m%10;
            m=(m-b)/10;
    }
    m=a;
    for(i=0 ;m%10!=0;i++)
        {
            b=m%10;
            m=(m-b)/10;
            t=b;
            for(k=0;k<j-1;k++)
                t=t*b;
            s+=t;
        }
    if(a==s)
       printf("\n�������ˮ�ɻ���\n");
    else
       printf("\n���������ˮ�ɻ���\n");
    return 0;
}
