#include<stdio.h>
int main(void)
{
    int m,n,i,j,r[102],c[102],a[102][102]={0};
    puts("输入行数(<100)");
    scanf("%d",&m);
    puts("输入列数(<100)");
    scanf("%d",&n);
    printf("输入方阵(<%d)\n",m*n);
    for(i=0;i<m;i++)
    for(j=0;j<n;j++)
    scanf("%d",&a[i][j]);
    for(i=0;i<m;i++)
    {a[i][101]=a[i][0];
    r[i]=0;
    for(j=1;j<n;j++)
    if(a[i][101]<a[i][j])
     {a[i][101]=a[i][j];
     r[i]=j;}
    }
    for(j=0;j<n;j++)
    {a[101][j]=a[0][j];
    c[j]=0;
    for(i=1;i<m;i++)
    if(a[101][j]>a[i][j])
     {a[101][j]=a[i][j];
     c[j]=i;}
    }
     int found=0;
     for(i=0;i<m;i++){
     j=r[i];
     if(a[i][j]==a[101][j]){
         printf("Array[%d][%d]=%d\n",i,j,a[i][j]);
         found = 1;
     }
}
if (!found) printf("None\n");
    return 0;
}
