#include <stdio.h>
#include<stdlib.h>
#include <string.h>
   struct stud
{
    int num;
    char name[30];
    float score;
} *ps;

int main()
{
    ps = (struct stud*)malloc(sizeof(struct stud));
    ps->num = 1001;
    strcpy(ps->name, "Íõ·É");
    ps->score = 80;
    printf("Number=%d\nName=%s\nScore=%.1f\n", ps->num, ps->name, ps->score);
    free(ps);
}

