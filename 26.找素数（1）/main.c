#include <stdio.h>
int main()
 {
     printf("请输入要查验的数字:");
     int v=999,a[v],n;
    for(int i=0;i<v;++i)
        {
        scanf("%d",&a[i]);
        n=a[i];
    int f=1,u;
    if(n<2)
        {
            printf("请输入大于1的数字!");
        return 0;
        }
    else
    {for(u=2;u<=n/2;u++)
            if(n%u==0)
              {
                f=0;
                break;
                }
                 f?printf("%d是素数\n",n):printf("%d不是素数\n",n);
    }
           }
    return 0;
}

