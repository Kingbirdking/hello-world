#include <stdio.h>
#include <ctype.h>
#define N 80
int main(void)
{
    char a[N];
    int i = 0, c = 0;
    printf("������ӣ�");
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
    printf("������%d��\n", c);
    return 0;
}
