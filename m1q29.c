#include <stdio.h>

int main() {
    int number;

    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("偶數\n");
    } else {
        printf("奇數\n");
    }

    return 0;
}
