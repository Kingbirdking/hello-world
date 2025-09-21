#include <stdio.h>
float aver(int x,int y)
{
    return  (x+y)/2.0;
}

int main()
{
    int num1,num2;
    float average;
    scanf("%d,%d",&num1,&num2);/*´ø¶ººÅÊäÈë*/
    average=aver(num1,num2);
    printf("average=%2f\n",average);
    return 0;
}
