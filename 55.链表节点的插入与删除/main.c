#include <stdio.h>
#include <stdlib.h>
struct stud
{
    int num;
    float score;
    struct stud *next;
};
int main()
{
    int i,n=0;
    char ch;
    struct stud *head=NULL,*p,*s,*r;
    p=r=(struct stud*)malloc(sizeof(struct stud));
    puts("Input '0' at number to stop !");
    printf("Please input the number:");
    scanf("%d",&(p->num));
    if(p->num!=0)
    {
    printf("Please input the score:");
    scanf("%f",&(p->score));
    }
    while(p->num!=0)
    {
        n++;
        if(n==1)
            head=p;
        else
            r->next=p;
            r=p;
        p=(struct stud*)malloc(sizeof(struct stud));
        printf("Please input the number:");
    scanf("%d",&(p->num));
    if(p->num!=0)
    {
    printf("Please input the score:");
    scanf("%f",&(p->score));
    }
    }
    s=head;
    printf("The number of the Link:\n");
    printf("number           score\n");
    while(s!=NULL)
    {
        printf("%-16d",s->num);
        printf("%.1f\n",s->score);
        s=s->next;
    }
            printf("input a number to choose the next operation \nAdd data:  1\nDelete data:  2\nExit the program: 0\n");
    while(1)
    {
    sb:
    ch='0';
    printf("Make your choice:");
    scanf(" %c",&ch);
    if(ch=='1')
    {
    p=(struct stud*)malloc(sizeof(struct stud));
    p->next=NULL;
    printf("inter the new number:");
    scanf("%d",&(p->num));
    printf("input the score:");
    scanf("%f",&(p->score));
    s=head;
    while(s->next!=NULL)
        s=s->next;
    s->next=p;
    }
    else if(ch=='2')
    {
        if(head == NULL)
    {
        printf("List is empty.\n");
        goto sb;
    }
    printf("Please input the number to delete:");
    scanf("%d",&i);
    s = head;
    p = NULL;
    while((s!=NULL)&&(s->num!=i))
    {
        p=s;
        s=s->next;
    }
    if (s == NULL)
    {
    printf("Student not found.\n");
    }
else if (s == head)
    {
    head = s->next;
    free(s);
    }
else
    {
    p->next = s->next;
    free(s);
    }
    }
    else
            return 0;
    printf("\nThe New Link: ");
    s=head;
    printf("\nnumber           score:\n");
    while(s!=NULL)
    {
        printf("%-16d",s->num);
        printf("%.1f\n",s->score);
        s=s->next;
    }
}
}
