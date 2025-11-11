#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    FILE *fp;
    int i,j;
    if((fp=fopen("file.txt","w"))==NULL)
    {
        printf("can not open this file!\n");
        exit(0);
    }

    for(i=1;i<=100;i++)
    {
        fprintf(fp,"%4d",i);
        if(i%10==0)fprintf(fp,"%c",'\n');
    }
        fclose(fp);
    if((fp=fopen("file.txt","r"))==NULL)
    {
        printf("can not open this file!\n");
        exit(0);
    }
    j=0;
    /*while(!feof(fp))//问题写法，会多走一次
    {
        fscanf(fp,"%d",&i);
        printf("%4d",i);
        j++;
        if(j%10==0)printf("\n");
    }*/
    j=0;
while (fscanf(fp, "%d", &i) == 1)
    {
        printf("%4d", i);
        j++;
        if (j % 10 == 0)
            printf("\n");
    }
    fclose(fp);
}
