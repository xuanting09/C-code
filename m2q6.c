#include <stdio.h>

int main() {
    int num3 = 0;
    int i = 2;
    int all = 0;

    scanf("%d", &num3);

    int num1 = num3 / 2;

    if (num3 > 0) {
        for (i = 2; i <= num1; i++) {
            if (num3 % i == 0) {
                all++;
                break;
            }
        }

        if (all == 0) {
            printf("YES");
        } else {
            printf("NO");
        }
    } else {
        printf("NO");
    }

    return 0;
}
