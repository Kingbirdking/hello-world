#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int vs(char x,char y)
{
if(x==y)printf("平局");
else if((x=='q'&&y=='w')||(x=='w'&&y=='e')||(x=='e'&&y=='q'))printf("你输了……");
else printf("您赢了！");
return 0;
}
int main()
{
char ji=' ',re=' ',f[16];
int a;
srand((unsigned int)time(NULL));
f[0]='y';
while(f[0]=='y'||f[0]=='y'){
    printf("规则: 石头(q)剪刀(w)布(e)\n");
    printf("请出拳:");
    scanf("%c",&re);
    if(re=='q')printf("您出石头");
    else if(re=='w')printf("您出剪刀");
    else printf("您出布");
    printf("\n");
    a=rand()%3;
    if(a==0){ji='q';printf("对方出石头");}
    else if(a==1){ji='w';printf("对方出剪刀");}
    else {ji='e';printf("对方出布");}
    printf("\n");
    vs(ji,re);
    printf("\n");
    printf("继续(y/n)?\n");
    getchar();
    fgets(f,sizeof(f),stdin);
    }
    return 0;
}
