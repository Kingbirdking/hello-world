#include <stdio.h>
int main()
{
    long int t,a,b,i,s;
    char c;
    tp:printf("您想要斐波那契数列的第几个数？");
    printf("\n");
    a=1,b=1,i=2;
    scanf("%ld",&s);
    if ((s==1)||(s==2))
       {
        printf("这个数是:1");
        printf("\n");
       }
    else if((s<=0)||(s>46))
        {
            printf("姚某实力有限，请您换个1~46间的数吧！");
            printf("\n");
        goto tp;
        }
     else {
            while(i<s)
                {t=b;
                b=a+b;
                a=t;
                i++;
                }
                printf("这个数是:%ld",b);
                printf("\n");
            }
    printf("您还继续运行吗？（Y/N)\n");
    scanf("  %c",&c);
        if((c!='N')&&(c!='n'))
            goto tp;
    return 0;
}

