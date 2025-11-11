#include <stdio.h>
#include <stdlib.h>
#include <time.h>
float jue(float x,float y)
{
    float jie;
    if(x-y<0)
        jie=y-x;
    else
        jie=x-y;
    return jie;
}

int main() {
int f=0,i;
float an,en;
char eh;
puts("若除不尽，保留六位小数！");
while(1)
   {
    eh=' ';
    srand((unsigned int)time(NULL));
    int a= rand()%2;
    int b= rand()%2;
    int m= rand()%1000;
    int n= rand()%1000;
    int e= rand()%4;
    int x= rand()%4;
    int y= rand()%4;
    float c=(float)m;
    float d=(float)n;
    for(i=0;i<x;i++)
        c/=10;
    for(i=0;i<y;i++)
        d/=10;
    if(a==1)
    c=-c;
    if(b==1)
    d=-d;
    while(c/10==c)
        c/=10;
    while(d/10==d)
        d/=10;
switch(e){
    case 0:if(c<0&&d<0)printf("(%g)+(%g)=",c,d);else if(c<0&&d>0)printf("(%g)+%g=",c,d);else if(c>0&&d<0)printf("%g+(%g)=",c,d); else printf("%g+%g=",c,d);an=c+d;break;
    case 1:if(c<0&&d<0)printf("(%g)-(%g)=",c,d);else if(c<0&&d>0)printf("(%g)-%g=",c,d);else if(c>0&&d<0)printf("%g-(%g)=",c,d); else printf("%g-%g=",c,d);an=c-d;break;
    case 2:if(c<0&&d<0)printf("(%g)×(%g)=",c,d);else if(c<0&&d>0)printf("(%g)×%g=",c,d);else if(c>0&&d<0)printf("%g×(%g)=",c,d); else printf("%g×%g=",c,d);an=c*d;break;
    case 3:if(c<0&&d<0)printf("(%g)÷(%g)=",c,d);else if(c<0&&d>0)printf("(%g)÷%g=",c,d);else if(c>0&&d<0)printf("%g÷(%g)=",c,d); else printf("%g÷%g=",c,d);an=c/d;break;
}
    scanf(" %f",&en);
    if(jue(en,an)<0.001){
            printf("%f\n",jue(en,an));
    puts("对");
    printf("当前得分为%d\n",++f);}
    else
    puts("错");
    printf("正确答案为%g\n",an);
    puts("是否继续(Y/N)？");
    scanf(" %s",&eh);
    if(eh=='n'||eh=='N')
    return 0;
}
}
