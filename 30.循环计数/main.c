#include <stdio.h>
int main()
{
    int x;
    char i,a;
    a='y';
    do
    {
        x=0;
        printf("�������ַ�����:");
        do
            {
            i=getchar();
            x++;
            }
    while(i!='\n');
    printf("\n���ַ������ַ���Ϊ:%d",--x);
        printf("\n�Ƿ���Ҫ�����������(Y/N)?\n");
        a=getchar();
        getchar();
    }
    while((a=='Y')||(a=='y'));
    return 0;
}
