#include <stdio.h>
struct stu
{
 int num;
 char*name;
 char sex;
 float score;
}boy[5]={
{101,"杨欣政",'M',45},
{102,"姚卓君",'M',23},
{103,"李亚楠",'M',96},
{104,"冯敬亭",'W',87},
{105,"高子榆",'W',58},
};
int main()
{
    struct stu *ps;
    void ave(struct stu *ps);
    ps=boy;
    ave(ps);
    return 0;
}
void ave(struct stu *ps)
{
    int c=0,i;
    float ave,s=0;
    for(i=0;i<5;i++,ps++)
    {
        s+=ps->score;//ps指向的score的值参与运算
        if(ps->score<60)c+=1;
    }
    printf("s=%f\n",s);
    ave=s/5;
    printf("average=%f\ncont=%d\n",ave,c);
}
