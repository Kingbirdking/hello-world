#include <stdio.h>
int main(void)
{
    int k=0,i=0;
    char n,s[80];
    do
    {
    k=1;
    i=0;
        while (scanf("%c", &n) == 1)
        {
            if (n == '\n')
                break;
            else if(n>=49&&n<=53)
            s[i++]=n;
            else
                k = 0;
        }
        if(k==0)
        {
        for (int i= 0; i < 80; i++) s[i] = 0;
        printf("输入有误，请输入1～5的正整数！\n");

        }
    }
    while (k==0);
    for(k=0;k<i;k++)
    {
    switch(s[k])
    {
        case '1':
             printf("为");
             break;
        case '2':
             printf("人");
             break;
        case '3':
             printf("民");
             break;
        case '4':
             printf("服");
             break;
        case '5':
             printf("务");
             break;
    }
    }
}
