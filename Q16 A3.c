#include <stdio.h>
void delPos() {
    int arr[20], n, pos, i;
    printf("Enter number of elements:");
    scanf("%d", &n);
    printf("Enter values:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter position to delete:");
    scanf("%d", &pos);
    for(i = pos; i < n-1; i++)
        arr[i] = arr[i+1];
    n--;
    printf("Array after deletion:");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
