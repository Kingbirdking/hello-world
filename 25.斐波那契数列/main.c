#include <stdio.h>
int main()
{
    long int t,a,b,i,s;
    char c;
    printf("����Ҫ쳲��������еĵڼ�������");
    printf("\n");
    tp:a=1,b=1,i=2;
    if (scanf("%ld",&s)==0)
        {
            getchar() != '\n';
            printf("������Ĳ������֣�����������");
            printf("\n");
            goto tp;
        }
    if ((s==1)||(s==2))
       {
        printf("�������:1");
        printf("\n");
       }
    else if((s<=0)||(s>46))
        {
            printf("Ҧĳʵ�����ޣ���������1~46������ɣ�");
            printf("\n");
        goto tp;
        }
     else {
            while(i<s)
                {t=b;
                b=a+b;
                a=t;
                i++;
                }
                printf("�������:%ld",b);
                printf("\n");
            }
    printf("������Ҫ�ڼ����������������Ҫ������'N'��������)\n");
    scanf("%c",&c);
    if((c!='N')&&(c!='n'))
        goto tp;
    return 0;
}
