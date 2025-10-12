#include <stdio.h>
int main()
{
    char a;
    printf("\n请输入一个小写字母:");
    scanf("%c",&a);
    switch(a)
    {
        case'a':
        case'e':
        case'i':
        case'o':
        case'u':
            printf("你输入的是元音字母");
            break;
        default:printf("你输入的不是元音字母");
    }
    return 0;
}
