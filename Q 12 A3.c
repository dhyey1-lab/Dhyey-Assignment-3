#include <stdio.h>
void insertBegin() {
    int arr[20], n, val, i;
    printf("Enter number of elements:");
    scanf("%d", &n);
    printf("Enter values:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter value to insert at beginning:");
    scanf("%d", &val);
    for(i = n; i > 0; i--)
        arr[i] = arr[i-1];
    arr[0] = val;
    n++;
    printf("Array after insertion:");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
