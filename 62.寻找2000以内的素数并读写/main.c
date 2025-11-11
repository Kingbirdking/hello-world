#include <stdio.h>
#include <stdlib.h>
int fi(int m,int n)
{
    int i,j,f;
    for(i=++n;i<=m;i++)
        {
        f=0;
        for(j=2;j<=i/2;j++)
        if(i%j==0)
        f=1;
        if(f==0)
            return i;
            }
    return 0;
};
int main()
{
    int a[350],ne,m=2000,n=1,i=0,j,t=1,l=0;
    FILE *fp;
    while ((ne = fi(m, n)) != 0) {
        a[i++] = ne;
        n = ne;
    }
    if((fp=fopen("data.dat","wb"))==NULL)
    {
        printf("can not open this file !\n");
        exit(0);
    };
    fwrite(a,sizeof(int),i,fp);
    fclose(fp);
    if((fp=fopen("data.dat","rb"))==NULL)
    {
        printf("can not open this file !\n");
        exit(0);
    };
FILE *txt = fopen("file.txt", "w");
if (txt == NULL) {
    printf("can not open file.txt\n");
    exit(0);
}
for (int k = 0; k < i; ++k){
    n=a[k];
        while(n!=0)
        {
            n/=10;
            l++;
        }
    fprintf(txt, "%-*d",10-l,a[k]);
    l=0;
    if(t++%10==0)
    {
        t=1;
         fprintf(txt,"\n");
    }
}
fclose(txt);
    return 0;
}
