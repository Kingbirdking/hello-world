#include <stdio.h>
#include <stdlib.h>
struct stud
{
  int number;
  int score;
  struct stud *next;  //指针域作结点
};
int main()
{
    int n=0;
    struct stud *head=NULL,*p,*r,*s;
    p=r=(struct stud*)malloc(sizeof(struct stud));
    printf("Please input the number:");
    scanf("%d",&(p->number));
    printf("\nPlease input the score:");
    scanf("%d",&(p->score));
    while(p->number!=0)
    {
        n++;
        if(n==1)
            head=p;
        else
            r->next=p;
        r=p;
        p=(struct stud*)malloc(sizeof(struct stud));
        printf("\nPlease input the number:");
        scanf("%d",&(p->number));
        printf("\nPlease input the score:");
        scanf("%d",&(p->score));
    }
    r->next=NULL;
    s=head;
    printf("\nnummber:      score:\n");
    while(s!=NULL)
    {
        printf("%-16d",s->number);
        printf("%d\n",s->score);
        s=s->next;
    }
    return 0;
}
