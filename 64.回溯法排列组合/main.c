#include <stdio.h>
#define MAX_SIZE 10

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void generatePermutations(int arr[], int start, int end) {
    int i;
    if (start == end) {
        for (i = 0; i <= end; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    for (i = start; i <= end; i++) {
        swap(&arr[start], &arr[i]);
        generatePermutations(arr, start + 1, end);
        swap(&arr[start], &arr[i]); // 回溯
    }
}

int factorial(int n) {
    return n <= 1 ? 1 : n * factorial(n - 1);
}

int main() {
    int n, i;
    int numbers[MAX_SIZE];
    printf("请输入数字的个数 (范围: 1-%d): ", MAX_SIZE);
    scanf("%d", &n);

    if (n <= 0 || n > MAX_SIZE) {
        printf("无效输入！请确保输入的数字在1到%d之间。\n", MAX_SIZE);
        return 1;
    }

    printf("请输入%d个数字:", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    printf("\n所有排列方式:\n");
    printf("===============\n");
    generatePermutations(numbers, 0, n - 1);
    printf("===============\n");
    printf("排列总数: %d\n", factorial(n));

    return 0;
}
