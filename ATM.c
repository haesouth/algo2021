#include <stdio.h>
#include <stdlib.h>

int main() {
    int num, temp = 0;
    int* arr;

    scanf("%d\n", &num);

    arr = (int*)malloc(sizeof(int) * num);

    for (int i = 0; i < num; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int sum = 0;

    for (int i = 0; i < num; i++) {
        sum += arr[i] * (num - i);
    }

    printf("%d", sum);
    free(arr);
}