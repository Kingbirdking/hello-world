#include <stdio.h>
#define PI 3.14159

int main()
{
    float area,R;
    printf("输入圆的半径：");
    scanf("%f",&R);
    area = PI * R * R;
    printf("圆的面积为：%.2f",area);
    return 0;
}
