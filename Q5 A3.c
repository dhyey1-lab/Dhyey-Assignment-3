#include <stdio.h>
void add2D() {
    int a[2][2], b[2][2], sum[2][2], i, j;
    printf("Enter values for 1st array:\n");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);
    printf("Enter values for 2nd array:\n");
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &b[i][j]);
    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            sum[i][j] = a[i][j] + b[i][j];
    printf("Sum matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }
}
