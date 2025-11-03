#include <stdio.h>
int find(int arr[],int n,int x);
int main(void)
{
    int a[80],i,n,x;
    printf("Input numbers:\n");
    for(n=0;n<80; )
    {
        scanf("%d",&a[n]);
        n++;
        if(getchar()=='\n')
            break;
    }
    printf("Input the number be found:\n");
    scanf("%d",&x);
    i=find(a,n,x);
    if(i>=0)
        printf("value=%d,index=%d",x,i+1);
    else
        printf("Not find!");
    return 0;
}
int find(int arr[],int n,int x)
{
    int i=0;
    for( ;i<n;i++)
        if(x==arr[i])
                break;
    if(i<n)
        return i;
    else
        return -1;
}
