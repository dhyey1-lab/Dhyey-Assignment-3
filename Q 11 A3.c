#include <stdio.h>
void shiftArr() {
    int arr[10], shifted[10] = {0}, n, i;
    printf("Enter 10 values:\n");
    for(i = 0; i < 10; i++)
        scanf("%d", &arr[i]);
    printf("Enter n for shifting:");
    scanf("%d", &n);
    printf("Enter 1 for left, 0 for right shift:");
    int dir;
    scanf("%d", &dir);
    if(dir) {
        for(i = 0; i < 10-n; i++)
            shifted[i] = arr[i+n];
    } else {
        for(i = n; i < 10; i++)
            shifted[i] = arr[i-n];
    }
    printf("Shifted array: ");
    for(i = 0; i < 10; i++)
        printf("%d ", shifted[i]);
    printf("\n");
}
