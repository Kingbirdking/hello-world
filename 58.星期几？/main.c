#include <stdio.h>
int main()
{
    int y,m,d,Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec,n,s,ni;
    do{
    printf("请输入年份(公元前年份输入负数):");
    scanf(" %d",&y);
    if(y==0)
        puts("年份不可为0, 请重新输入！");
    }while(y==0);
    printf("请输入月份:");
    scanf(" %d",&m);
    printf("请输入日:");
    scanf(" %d",&d);
    if(y>0){
    n=1,s=-1;
    while(n++<y)
    {
    if((n%4==0&&n%100!=0)||(n%400==0))
        s+=366;
    else
        s+=365;
    }
    if((y%4==0&&y%100!=0)||(y%400==0))
        Jan=31,Feb=29,Mar=31,Apr=30,May=31,Jun=30,Jul=31,Aug=31,Sep=30,Oct=31,Nov=30;
    else
        Jan=31,Feb=28,Mar=31,Apr=30,May=31,Jun=30,Jul=31,Aug=31,Sep=30,Oct=31,Nov=30;
    switch(m)
    {
        case 12:s+=Nov;
        case 11:s+=Oct;
        case 10:s+=Sep;
        case 9:s+=Aug;
        case 8:s+=Jul;
        case 7:s+=Jun;
        case 6:s+=May;
        case 5:s+=Apr;
        case 4:s+=Mar;
        case 3:s+=Feb;
        case 2:s+=Jan;
    }
    s+=d;
    enum week{mo,tu,we,th,fr,sa,su} w;
    w=s%7;
    switch(w)
    {
        case su:printf("周日");break;
        case mo:printf("周一");break;
        case tu:printf("周二");break;
        case we:printf("周三");break;
        case th:printf("周四");break;
        case fr:printf("周五");break;
        case sa:printf("周六");break;
    }
    }
    if(y<0)
        {
    n=0,s=0;
    while(n>y+1)
    {
        n--;
      ni=400-1-n;
    if((ni%4==0&&ni%100!=0)||(ni%400==0))
        s+=366;
    else
        s+=365;
    }
    ni=400-1-y;
    if((ni%4==0&&ni%100!=0)||(ni%400==0))
        Jan=31,Feb=29,Mar=31,Apr=30,May=31,Jun=30,Jul=31,Aug=31,Sep=30,Oct=31,Nov=30,Dec=31;
    else
        Jan=31,Feb=28,Mar=31,Apr=30,May=31,Jun=30,Jul=31,Aug=31,Sep=30,Oct=31,Nov=30,Dec=31;
    switch(m)
    {
        case 1:s+=Jan;
        case 2:s+=Feb;
        case 3:s+=Mar;
        case 4:s+=Apr;
        case 5:s+=May;
        case 6:s+=Jun;
        case 7:s+=Jul;
        case 8:s+=Aug;
        case 9:s+=Sep;
        case 10:s+=Oct;
        case 11:s+=Nov;
        case 12:s+=Dec;
    }
    s-=d-1;
    enum week{mo,su,sa,fr,th,we,tu} w;
    w=s%7;
    switch(w)
    {
        case su:printf("周日");break;
        case mo:printf("周一");break;
        case tu:printf("周二");break;
        case we:printf("周三");break;
        case th:printf("周四");break;
        case fr:printf("周五");break;
        case sa:printf("周六");break;
    }
    }
    return 0;
}
