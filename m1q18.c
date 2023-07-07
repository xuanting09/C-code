#include<stdio.h>

int main() {
    int x;
    int y;
    scanf("%d", &x);

    if (x < -1) {
        y = 3 * x * x;
        printf("結果： %d\n", y);
    } else if (x > -1 && x < 1) {
        y = x * x * x + 3 * x - 3;
        printf("結果： %d\n", y);
    } else if (x > 1) {
        y = 2 * x + 3;
        printf("結果： %d\n", y);
    } else {
        printf("輸入值無效\n");
        return 0;
    }

    return 0;
}
