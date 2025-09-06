#include <stdio.h>
void insertPos() {
    int arr[20], n, val, pos, i;
    printf("Enter number of elements:");
    scanf("%d", &n);
    printf("Enter values:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter value and position:");
    scanf("%d%d", &val, &pos);
    for(i = n; i > pos; i--)
        arr[i] = arr[i-1];
    arr[pos] = val;
    n++;
    printf("Array after insertion:");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
