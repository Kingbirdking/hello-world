#include <stdio.h>
int main()
{
    int x,t,l,f;
    printf("������ͷ������:");
    scanf("%d",&t);
    printf("�������ȵ�����:");
    scanf("%d",&l);
    x=0,f=0;
    while(4*x<=l)
    {
        if((2*x+2*t==l)&&(t-x>=0))
            {
            f=1;
            printf("����%dֻ",x);
            printf("����%dֻ",t-x);
            }
        x++;
    }
    if(f==0)
        printf("�޽⣡");
    return 0;
}
