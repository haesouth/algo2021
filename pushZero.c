#include <stdio.h>
int main(void)
{
    
    int arr1[] = { 6, 0, 8, 2, 3, 0, 4, 0, 1 };
    int n = sizeof(arr1) / sizeof(arr1[0]);
    
    int arr2[n];
    int j = 0;
    
    for (int i = 0; i < n; i++){
        if (arr1[i] != 0) {
            arr2[j++] = arr1[i];
            }
        }
    while (j < n)
    arr2[j++] = 0;
        
        for (int i = 0; i < n; i++)
            printf("%d ", arr2[i]);
        return 0;
}