#include <stdio.h>

int main() {
    int price;
    scanf("%d", &price);

    int thousand = price / 1000;
    int hundred = (price % 1000) / 100;
    int ten = (price % 100) / 10;
    int dollar = price % 10;

    if (thousand > 0) {
        printf("%d thousand ", thousand);
    }
    if (hundred > 0) {
        printf("%d hundred ", hundred);
    }
    if (ten > 0) {
        printf("%d ten ", ten);
    }
    if (dollar > 0) {
        printf("%d dollar ", dollar);
    }

    printf("\n");

    return 0;
}

