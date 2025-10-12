#include <stdio.h>
int main()
{
    char c;
    printf("\n请输入一个字符:");
    c=getchar();
    if(c>='A'&&c<='Z')
        printf("\n这是一个大写字母");
    else if(c>='a'&&c<='z')
        printf("\n这是一个小写字母");
    else
        printf("这是一个其它字符\n");
    return 0;
}
