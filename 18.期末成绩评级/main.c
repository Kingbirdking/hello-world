#include <stdio.h>
int main()
{
    int g;
    printf("\n��������ĩ���Գɼ���");
    scanf("%d",&g);
    if((g<0)||(g>100))
    printf("���ĳɼ�������������0~100�������");
    else if(g<10)
    printf("������Ⱳ������\n");
     else if((g<=100)&&(g>=90))
    printf("\n����");
     else if((g<90)&&(g>=80))
    printf("\n����");
     else if((g<80)&&(g>=60))
    printf("\n����");
     else if(g<60)
    printf("������");
     else if(g<10)
    printf("������Ⱳ������\n");
    return 0;
}
