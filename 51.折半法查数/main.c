#include <stdio.h>
int main()
{
    int n = 99, m = 0, s[n][2], t, u, j, i, f = 0;
    printf("请输入数据:\n");
     for (i = 0; i < n; i++)
    {
        scanf("%d", &s[i][0]);
           s[i][1]=i+1;
        if (getchar() == '\n')
            break;
            }
    n = ++i;
    u = n / 2;
    printf("数据读取完毕 \n");
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (s[i][0] < s[j][0])
            for(u=0;u<2;u++)
            {
                t = s[i][u];
                s[i][u]= s[j][u];
                s[j][u] = t;
            }
        }
    }
    puts("输入要查的数字:");
    scanf("%d", &t);
    while (f == 0)
    {
        if (t == s[u][0])
        {
            printf("这个数在第%d个", s[u][1]);
            f = 1;
        }
        else if (t < s[u][0])
        {
            u = (n + u) / 2;
            m = u;
            if (s[u - 1][0] > t && s[u][0] < t)
            {
                printf("查无此数！");
                f = 1;
            }
        }
        else if (t > s[u][0])
        {
            u=(m+u) / 2;
            n=u+1;
            if (s[u][0]>t && s[u+1][0]<t)
            {
                printf("查无此数！");
                f = 1;
            }
        }
    }
    return 0;
}
