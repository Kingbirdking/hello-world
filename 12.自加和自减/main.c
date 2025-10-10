#include <stdio.h>

int main()
{
    int num1,num2;
    num1=5;
    num2=++num1;
    printf("%d,%d\n",num1,num2);

    num1=5;
    num2=num1++;
    printf("%d,%d\n",num1,num2);

    num1=5;
    num2=--num1;
    printf("%d,%d\n",num1,num2);

    num1=5;
    num2=num1--;
    printf("%d,%d\n",num1,num2);

    return 0;
}
