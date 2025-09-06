#include <stdio.h>
void minNotes(int value) {
    int notes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int count, i;
    printf("For amount %d, notes:\n", value);
    for(i = 0; i < 9; i++) {
        count = value / notes[i];
        if(count > 0) {
            printf("%d x %d\n", count, notes[i]);
            value = value % notes[i];
        }
    }
}
