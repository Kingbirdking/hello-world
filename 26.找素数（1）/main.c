#include <stdio.h>
int main()
 {
     printf("������Ҫ���������:");
     int v=999,a[v],n;
    for(int i=0;i<v;++i)
        {
        scanf("%d",&a[i]);
        n=a[i];
    int f=1,u;
    if(n<2)
        {
            printf("���������1������!");
        return 0;
        }
    else
    {for(u=2;u<=n/2;u++)
            if(n%u==0)
              {
                f=0;
                break;
                }
                 f?printf("%d������\n",n):printf("%d��������\n",n);
    }
           }
    return 0;
}

