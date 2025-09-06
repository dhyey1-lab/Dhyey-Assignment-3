#include <stdio.h>
void sortArray() {
    int arr[5], i, j, temp, order;
    printf("Enter 5 values:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    printf("Enter 1 for ascending, 0 for descending: ");
    scanf("%d", &order);
    for(i = 0; i < 4; i++)
        for(j = 0; j < 4 - i; j++)
            if((order && arr[j] > arr[j+1]) || (!order && arr[j] < arr[j+1])) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
    printf("Sorted array: ");
    for(i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
