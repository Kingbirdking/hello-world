#include <stdio.h>
#include <stdlib.h>
void main(int argc,char*argv[])
{
    int sum=0,i;
    for(i=1;i<argc;i++)
        sum+=atoi(argv[i]);
    for(i=1;i<argc-1;i++)
        printf("%d+",atoi(argv[i]));
    printf("%d=%d\n",atoi(argv[argc-1]),sum);
}
