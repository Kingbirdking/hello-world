#include <stdio.h>
int main()
{
    char c;
    printf("\n������һ���ַ�:");
    c=getchar();
    if(c>='A'&&c<='Z')
        printf("\n����һ����д��ĸ");
    else if(c>='a'&&c<='z')
        printf("\n����һ��Сд��ĸ");
    else
        printf("����һ�������ַ�\n");
    return 0;
}
