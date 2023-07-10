#include <stdio.h>

int main() {
    int year;

    scanf("%d", &year);

    if (year % 400 == 0) {
        printf("%d年是閏年\n", year);
    } else if (year % 100 == 0) {
        printf("%d年是平年\n", year);
    } else if (year % 4 == 0) {
        printf("%d年是閏年\n", year);
    } else {
        printf("%d年是平年\n", year);
    }

    return 0;
}
