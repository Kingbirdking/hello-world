#include <stdio.h>
#include <string.h>
#define M 80
#define N  20
void main()
{
    int la,lb,i=0,n=0,j;
    char a[M],b[N];
    puts("Inter the main string:");
    gets(a);
    puts("Inter the string will be found:");
    gets(b);
    la=strlen(a);
    lb=strlen(b);
    while(la>=lb)
    {
        for(j=0;j<lb&&a[i+j]==b[j];j++);
            if(j==lb)
            n++;
        la--;
        i++;
    }
    printf("The string appears %d times.",n);
}
