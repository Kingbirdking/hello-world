#include <stdio.h>
void main()
{
    int i=0,j=0,k,n,t=0;
    printf("Input the side length (A positive integer between 1 and 50): ");
    do
    {
        k=1;
    if((scanf("%d",&n)==0)||((n<=0)||(n>50)))
    {
        printf("Invalid input !\nPlease input again(a positive integer between 1 and 50): ");
        k=0;
        getchar();
    }
    }
    while(k==0);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        t++;
        a[i][0]=t;
    }
    i-=1;
    while(k<=(n+1)/2)
    {
    for(j=k;j<n+1-k;j++)//об
        {
        t++;
        a[i][j]=t;
    }
    j-=1;
    for(i-=1 ;i>=k-1;i--)//вС
    {
        t++;
        a[i][j]=t;
    }
    i+=1;
    if(t==n*n)
        break;
    for(j-=1;j>=k;j--)//ио
        {
        t++;
        a[i][j]=t;
    }
    j+=1;
    for(i=k;i<n-k;i++)//ср
    {
        t++;
        a[i][j]=t;
    }
    i-=1;
    if(t==n*n)
        break;
    k++;
    }
    k=1;
    while(t!=0)
    {
        t/=10;
        k++;
    }
    puts("The spiral matrix is:");
     for(j=0;j<n-1;j++)
     {
         for(i=0;i<n;i++)
            printf("%-*d",k,a[i][j]);
         printf("\n");
     }
     for(i=0;i<n;i++)
            printf("%-*d",k,a[i][j]);
        printf("\nThank you for using this program!");
}
