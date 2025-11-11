#include <stdio.h>
#define M 2
#define N 3
/*int main()
{
    int a[M][N],(*p)[N],i,j;
    p=a;
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        scanf("%d",*(p+i)+j);
    }
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
            printf("%d ",*(*(p+i)+j));//即为p[i][j]
        printf("\n");
    }
    return 0;
}*/
int main()
{
    int a[M][N],(*p)[N],i,j;
    p=a;
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        scanf("%d",*(p+i)+j);
    }
    for(i=0;i<M;i++)
    {
    p=a+i;
        for(j=0;j<N;j++)
            printf("%d ",*(*p+j));//即为p[0][j]
        printf("\n");
    }
    return 0;
}

