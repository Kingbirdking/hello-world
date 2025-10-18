#include <stdio.h>
int main()
{
    int x;
    char i,a;
    a='y';
    do
    {
        x=0;
        printf("请输入字符序列:");
        do
            {
            i=getchar();
            x++;
            }
    while(i!='\n');
    printf("\n该字符序列字符数为:%d",--x);
        printf("\n是否需要输入更多序列(Y/N)?\n");
        a=getchar();
        getchar();
    }
    while((a=='Y')||(a=='y'));
    return 0;
}
