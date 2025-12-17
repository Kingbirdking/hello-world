/*for(i=1;scanf("%d",&a[i]);i++)
       if(getchar()=='\n')
        break;
        for(j=0;j<=i;j++)
        printf("%d",a[j]);*/
#include <stdio.h>
int main()
 {
     printf("«Î ‰»Î:\n");
     int v=999,a[v],b[v],n,i,j,k,p;
     scanf(" %d",&a[0]);
    for(i=1;scanf("%d",&a[i]);i++)
    {
        for(k=0;k<i;k++)
        {
            for(p=0;p<k;p++)
                b[p]=a[p];
        for(j=k;j<i;j++)
        b[j+1]=a[j];
        b[k]=a[i];
        }
        for(j=0;j<=i;j++)
        printf("%d",b[j]);
        printf("\n");
    }
    for(j=0;j<=i;j++)
        printf("%d",b[j]);
    return 0;
}

