#include <stdio.h>
int main(void)
{
printf("����0�ɽ�������!\n");
    int n;
    tp:
    printf("������Ҫ���������:");
    while (scanf("%d", &n) == 1)
    {
        if(n==0)
            break;
        else if (n < 2)
        {
            printf("���������1������!\n");
            goto tp;
        }
     int i,f=1;
     for(i=2;i<=n;i++)
        f= ((n % i == 0)&&(n!=i)) ? 0 : f;
    f? printf("%d������\n\n", n) : printf("%d��������\n����0�ɽ�������\n", n);
    }
    return 0;
}
