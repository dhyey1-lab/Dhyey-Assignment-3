#include <stdio.h>
void acceptPrint5() {
    int arr[5], i;
    printf("Enter 5 values:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    printf("Entered values: ");
    for(i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

