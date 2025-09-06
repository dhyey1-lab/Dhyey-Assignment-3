#include <stdio.h>
void searchValue() {
    int arr[20], n, val, i, found = -1;
    printf("Enter number of elements:");
    scanf("%d", &n);
    printf("Enter values:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter value to search:");
    scanf("%d", &val);
    for(i = 0; i < n; i++)
        if(arr[i] == val) {
            found = i;
            break;
        }
    if(found != -1)
        printf("Value found at index %d\n", found);
    else
        printf("Value not found.\n");
}

int main() {
    return 0;
}
