#include <stdio.h>
int main()
{
    char a;
    printf("\n������һ��Сд��ĸ:");
    scanf("%c",&a);
    switch(a)
    {
        case'a':
        case'e':
        case'i':
        case'o':
        case'u':
            printf("���������Ԫ����ĸ");
            break;
        default:printf("������Ĳ���Ԫ����ĸ");
    }
    return 0;
}
