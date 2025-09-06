#include <stdio.h>
void copySkip() {
    int src[5], dest[10] = {0}, i, j = 0;
    printf("Enter 5 values:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &src[i]);
    for(i = 0; i < 5; i +=2)
        dest[j++] = src[i];
    printf("Copied after skipping: ");
    for(i = 0; i < 10; i++)
        printf("%d ", dest[i]);
    printf("\n");
}
