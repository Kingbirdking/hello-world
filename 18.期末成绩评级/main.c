#include <stdio.h>
int main()
{
    int g;
    printf("\n请输入期末考试成绩：");
    scanf("%d",&g);
    if((g<0)||(g>100))
    printf("您的成绩不合理，请输入0~100间的数字");
    else if(g<10)
    printf("你这分这辈子有了\n");
     else if((g<=100)&&(g>=90))
    printf("\n优秀");
     else if((g<90)&&(g>=80))
    printf("\n良好");
     else if((g<80)&&(g>=60))
    printf("\n及格");
     else if(g<60)
    printf("不及格");
     else if(g<10)
    printf("你这分这辈子有了\n");
    return 0;
}
