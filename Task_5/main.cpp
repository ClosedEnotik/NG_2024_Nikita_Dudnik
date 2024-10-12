#include <stdio.h>

void drawStar(int n);

void drawStar(int n) {
    for (int i = 0; i < n; i++) {
        printf("%*s", n - i, "");
        for (int j = 0; j < (2 * i + 1); j++) {
            printf("*");
        }
        printf("\n");
    }
    printf("%*s*\n", n - 1, "");
}

int main() {
    int number;
    printf("Write number: ");
    scanf_s("%d", &number);

    drawStar(number);

    return 0;
}
