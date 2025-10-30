#include <stdio.h>
#include <ctype.h>
#define N 80
int main(void)
{
    char a[N];
    int i = 0, c = 0;
    printf("输入句子：");
    gets(a);
    while (a[i] != '\0')
    {
        while (a[i] != '\0' && !isalpha(a[i]))
            i++;
        if (isalpha(a[i]))
        {
            c++;
            while (isalpha(a[i]))
                i++;
        }
    }
    printf("单词有%d个\n", c);
    return 0;
}
