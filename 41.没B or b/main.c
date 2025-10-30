#include <stdio.h>
void main()
{
    char a[100];
    int i=0,j=0;
    printf("This program can't read 'B' or 'b',try it yourself if you don't believe me.\n");
    printf("Inter a string please:\n");
    gets(a);
    while(a[i])
    {
        if(a[i]!='b'&&a[i]!='B')
        a[j++]=a[i];
    i++;
    }
    a[j]='\0';
    puts(a);
}
