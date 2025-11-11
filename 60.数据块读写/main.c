#include <stdio.h>
#include<stdlib.h>
#define N 10
int main(void)
{
    FILE *fp;
    float a[N],j;
    int i;
    printf("input the datas:\n");
    for(i=0;i<N;i++)scanf("%f",&a[i]);
        if((fp=fopen("data.dat","wb"))==NULL)
    {
        printf("can not open this file !\n");
        exit(0);
    };
    fwrite(a,sizeof(float),N,fp);
    fclose(fp);
    if((fp=fopen("data.dat","rb"))==NULL)
    {
        printf("can not open this file !\n");
        exit(0);
    };
    /*while(!feof(fp))//问题写法，会多走一次
    {
        fread(&j,sizeof(float),1,fp);
        printf("%f",j);
    }*/
while (fread(&j, sizeof(float), 1, fp) == 1)
    {
        printf("%f\n", j);
    }
    fclose(fp);
    return 0;
}
