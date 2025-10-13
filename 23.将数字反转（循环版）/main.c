#include <stdio.h>
#include <math.h>
int main()
{
    int v,r;
    printf("ÇëÊäÈëµ¹Ã¹µÄÊı×Ö:");
    scanf("%d",&v);
    if(v<0)
        printf("-");
    for(v=abs(v) ;v=v/10;v%10==0)
    while(v!=0)
    {
        r=v%10;
        printf("%d",r);
        v=v/10;
    }
    printf("\n");
    return 0;
}
