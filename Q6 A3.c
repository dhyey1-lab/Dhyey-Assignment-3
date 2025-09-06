#include <stdio.h>
void multiply2D() {
    int a[2][2], b[2][2], mul[2][2] = {0}, i, j, k;
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
            for(k = 0; k < 2; k++)
                mul[i][j] += a[i][k]*b[k][j];
    printf("Product matrix:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++)
            printf("%d ", mul[i][j]);
        printf("\n");
    }
}
