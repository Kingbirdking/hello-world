#include <stdio.h>
int main()
{
    int a,b,c,n,m,f;
    char c;
    printf("�����뼦��:");
    scanf("%d",&n);
    printf("������Ǯ��:");
    scanf("%d",&m);
    a=0,f=0;
    while((a<=m/5)&&(a<=n))
    {
    if((3*m-n-14*a)%8==0)
        {
            b=(3*m-n-14*a)/8;
        c=n-a-b;
        if(b>=0)
            f=1;
            printf("������\n������%dֻ\nĸ����%dֻ\nС����%dֻ\n",a,b,c);
        }
        a++;
    }
    if(f==0)
        printf("�����޽⣡");
    printf("�˴����������,�Ƿ����(Y/N)?")
    scanf("%c",c);
    if((c==Y)||(c==y))
    {
        gerchar
    }
    return 0;
}
