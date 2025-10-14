#include <stdio.h>
int main()
{
    int i=1,p=1,n;
    printf("ÇëÊäÈëÊı×Ö:");
    scanf("%d",&n);
    while(i<=n)
    {
        p=p*i;
        i++;
    }
    printf("%d\n",p);
    return 0;
}
