#include <stdio.h>
void frequency() {
    int arr[10], freq[100] = {0}, i;
    printf("Enter 10 numbers (values < 100):\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }
    printf("Frequency count:\n");
    for(i = 0; i < 100; i++)
        if(freq[i])
            printf("%d: %d\n", i, freq[i]);
}
