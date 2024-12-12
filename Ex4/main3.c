#include <stdio.h>
int main() {
    for (int i = 1; i <= 81; i++) {
        printf("%d x %d = %2d\t", (i - 1) / 9 + 1, (i - 1) % 9 + 1, ((i - 1) / 9 + 1) * ((i - 1) % 9 + 1));
        if (i % 9 == 0) {
            printf("\n");
        }
    }
    return 0;
}
