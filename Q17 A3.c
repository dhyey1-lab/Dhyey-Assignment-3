#include <stdio.h>
void delLast() {
    int arr[20], n, i;
    printf("Enter number of elements:");
    scanf("%d", &n);
    printf("Enter values:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    n--;
    printf("Array after deletion:");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
