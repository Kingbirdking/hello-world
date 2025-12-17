#include <stdio.h>
int next_perm(char *a, int n) {
    int i=n-2, j=n-1;
    while (i>=0&&a[i] >=a[i+1])--i;
    if (i<0) return 0;
    while (a[j]<= a[i]) --j;
    char t=a[i]; a[i]=a[j]; a[j]=t;
    for(int L=i+1,R=n-1; L<R; ++L,--R)
        t=a[L], a[L]=a[R], a[R]=t;
    return 1;
}

int main(void) {
    int i,n;
    printf("请输入最大值：");
    scanf("%d",&n);
    char s[n];
    for(i=0;i<n;i++)
     s[i]=i+'1';
    do {
        puts(s);
    } while (next_perm(s, n));
    return 0;
}
