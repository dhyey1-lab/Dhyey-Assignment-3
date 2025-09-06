#include <stdio.h>
void transpose4x4() {
    int mat[4][4], t[4][4], i, j;
    printf("Enter values for 4x4 matrix:\n");
    for(i = 0; i < 4; i++)
        for(j = 0; j < 4; j++)
            scanf("%d", &mat[i][j]);
    for(i = 0; i < 4; i++)
        for(j = 0; j < 4; j++)
            t[j][i] = mat[i][j];
    printf("Transpose:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++)
            printf("%d ", t[i][j]);
        printf("\n");
    }
}
