#include <stdio.h>

int main()
{
    int a,b,c,d,k,x,y,z;
    /*位运算*/
    a=~0,b=~1;
    printf("~0=%d,~1=%d\n\f",a,b);
    a=0&0,b=0&1, c=1&0,d=0&1;
    printf("0&0=%d,0&1=%d,1&0=%d,1&1=%d\f",a,b,c,d);
    a=0|0,b=0|1, c=1|0,d=0|1;
    printf("0|0=%d,0|1=%d,1|0=%d,1|1=%d\f",a,b,c,d);
    a=0^0,b=0^1, c=1^0,d=0^1;
    printf("0^0=%d,0^1=%d,1^0=%d,1^1=%d\f",a,b,c,d);
    /*条件运算符*/
    a=1,b=2,c=2;
    k=a<b?b:a;
    printf("a<b不成立，k的值为b的值%d\f",k);
    /*长度运算*/
    a=sizeof('A'),b=sizeof("A");
    printf("a=%d,b=%d\f",a,b);
    /*逗号运算符*/
    a=2,b=4,c=6;
    z=(y=b+c,x=a+b);
    printf("x=%d,y=%d,z=%d",x,y,z);
    return 0;
}
