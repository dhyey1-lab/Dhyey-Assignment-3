#include <stdio.h>
void insertEnd() {
    int arr[20], n, val, i;
    printf("Enter number of elements:");
    scanf("%d", &n);
    printf("Enter values:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter value to insert at end:");
    scanf("%d", &val);
    arr[n++] = val;
    printf("Array after insertion:");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
