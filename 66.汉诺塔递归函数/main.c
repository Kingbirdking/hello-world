#include <stdio.h>
int i=0;
void hanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        printf("第%d步: 将盘子 %d 从 %c 移动到 %c\n",++i, n, from, to);
        return;
        }
    hanoi(n - 1, from, aux, to);
    printf("第%d步: 将盘子 %d 从 %c 移动到 %c\n",++i, n, from, to);
    hanoi(n - 1, aux, to, from);
}
int main() {
    int n,f;
    puts("汉诺塔问题: 汉诺塔问题是一个经典的递归问题，规则如下：");
puts("有三根柱子（A、B、C）");
puts("有n个大小不同的盘子，开始时所有盘子都按从大到小的顺序堆叠在A柱上");
puts("目标是将所有盘子从A柱移动到C柱");
puts("每次只能移动一个盘子");
puts("任何时候大盘子都不能放在小盘子上面");
    printf("请输入盘子的数量: ");
    do{
    f=1;
    if(scanf("%d", &n)==1){
    if (n <= 0) {
        puts("盘子数量必须大于0！");
        f=0;
        getchar();
    }}
    else{
    f=0;
    getchar();
    }
    if(f==0)
    puts("输入非法，请重新输入:");
    }while(f==0);
    puts("操作步骤如下: ");
    hanoi(n, 'A', 'C', 'B');
     printf("移动步骤（共需要 %d 步）：\n", i);
    printf("所有盘子已从A柱移动到C柱！\n");
    return 0;
}
