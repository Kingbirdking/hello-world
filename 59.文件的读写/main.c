#include <stdio.h>
#include<stdlib.h>
int main(void)
{
    FILE *fp;
    char i;
    if((fp=fopen("file.txt","w"))==NULL)
        {printf("can not open this file!\n");
    exit(0);};
    for(i='A';i<='Z';i++)
        fputc(i,fp);
    fclose(fp);
    if((fp=fopen("file.txt","r"))==NULL)
        {printf("can not open this file!\n");
    exit(0);};
    /*while(!feof(fp))//问题写法，会多走一次
    {
        i=fgetc(fp);
        putchar(i);
    }*/
    int ch;
while ((ch = fgetc(fp)) != EOF)
putchar(ch);
    fclose(fp);
}
