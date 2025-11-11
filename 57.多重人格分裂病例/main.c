#include <stdio.h>
union data
    {
        char ch;
        int i;
        float f;
    };
int main()
{
    union data x,y,z;
    x.ch='A';
    y.ch='B';
    z.ch='C';
    y.i=12345679*9;
    z.f=3.14;
    printf("%c\n%d\n%.2f",x.ch,y.i,z.f);
    return 0;
}
