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
        printf("��������������1��5����������\n");

        }
    }
    while (k==0);
    for(k=0;k<i;k++)
    {
    switch(s[k])
    {
        case '1':
             printf("Ϊ");
             break;
        case '2':
             printf("��");
             break;
        case '3':
             printf("��");
             break;
        case '4':
             printf("��");
             break;
        case '5':
             printf("��");
             break;
    }
    }
}
