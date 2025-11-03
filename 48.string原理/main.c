#include <stdio.h>
char*link(char*a,char*b)//strcat
{
    char *t;
    t=a;
    while(*a!='\0')
        a++;
    while(*b!='\0')
    {
        *a=*b;
        a++;
        b++;
    }
    *a='\0';
    return t;
}
char*copy(char*a,char*b)//strcpy
{
    char*t;
    t=a;
    while(*b!='\0')
    {
        *a=*b;
        a++;
        b++;
    }
    *a='\0';
    return t;
}
int len(char*a)//strlen
{
    int i=0;
    while(*(a+i)!='\0')
        i++;
    return i;
}
int compare(char*a,char*b)//strcmp
{
    while(*a!='\0'&&*b!='\0'&&*a==*b)
    {
        a++;
        b++;
    }
    return *a-*b;
}
char*upr(char *a)//strupr
{
    char*t;
    t=a;
    while(*a!='\0')
    {
        if(*a>='a'&&*a<='z')
            *a-=32;
        a++;
    }
    return t;
}
char*lwr(char *a)//strlwr
{
    char*t;
    t=a;
    while(*a!='\0')
    {
        if(*a>='A'&&*a<='Z')
            *a+=32;
        a++;
    }
    return t;
}
int main()
{
    char x[100], y[100],f,c;
    puts("欢迎使用姚某不引用string.h办事系列！");
    do
    {
    puts("请选择你想实现的string函数库功能:");
    puts("1、将两个字符串连接（strcat）");
    puts("2、以第二个字符串取代第一个字符串（trcpy）");
    puts("3、计算字符串长度（strlen）");
    puts("4、比较两段字符串大小（strcmp）");
    puts("5、将字符串内所有小写字母变成大写（strupr）");
    puts("6、将字符串内所有大写字母变成小写（strlwr）");
    puts("注意: 本程序所有字符串内不允许含有回车和空格！");
   f=c='7';
   x[100]=' ';
   y[100]=' ';
    do
    {
    if(f=='0')
        puts("输入非法，程序重启！");
    puts("输入相应数字以开始:");
    f=getchar();
    switch(f)
    {
    case '1':
        puts("请输入第一个字符串:");
        if (scanf("%99s",x)!=1)
        {
            f='0';
            break;
        }
        puts("请输入第二个字符串:");
        if (scanf("%99s",y)!=1)
        {
            f='0';
            break;
        }
        puts("正在计算中...");
        puts("连接结果为:");
        printf("%s\n",link(x,y));
        puts("第一个字符串变为:");
        printf("%s\n",x);
        puts("第二个字符串变为:");
        printf("%s\n",y);
        break;
    case '2':
        puts("请输入第一个字符串:");
        if (scanf("%99s",x)!=1)
        {
            f='0';
            break;
        }
        puts("请输入第二个字符串:");
        if (scanf("%99s",y)!=1)
        {
            f='0';
            break;
        }
        puts("正在计算中...");
        puts("复制结果为:");
        printf("\n%s",copy(x,y));
        puts("第一个字符串变为:");
        printf("%s\n",x);
        puts("第二个字符串变为:");
        printf("%s\n",y);
        break;
    case '3':
        puts("请输入字符串:");
        if (scanf("%99s",x)!=1)
        {
            f='0';
            break;
        }
        puts("原字符串为:");
        printf("%s\n",x);
        puts("字符串长度为:");
        printf("%d\n",len(x));
        break;
    case '4':
        puts("请输入第一个字符串:");
        if (scanf("%99s",x)!=1)
        {
            f='0';
            break;
        }
        puts("请输入第二个字符串:");
        if (scanf("%99s",y)!=1)
        {
            f='0';
            break;
        }
        puts("正在计算中...");
        if (compare(x,y)>0)
        puts("第一个字符串较大");
        else if (compare(x,y)==0)
        puts("两个字符串一样大");
        else if (compare(x,y)<0)
        puts("第二个字符串较大");
        break;
    case '5':
        puts("请输入字符串:");
        if (scanf("%99s",x)!=1)
        {
            f='0';
            break;
        }
        puts("原字符串为:");
        printf("%s\n",x);
        puts("转化后结果为:");
        printf("%s\n",upr(x));
        break;
    case '6':
        puts("请输入字符串:");
        if (scanf("%99s",x)==0)
        {
            f='0';
            break;
        }
        puts("原字符串为:");
        printf("%s\n",x);
        puts("转化后结果为:");
        printf("%s\n",lwr(x));
        break;
    }
    }
    while(f=='0');
    puts("是否继续使用本程序？(Y/N)");
    getchar();
    c=getchar();
    getchar();
    }
    while(c=='Y'||c=='y');
    return 0;
}
