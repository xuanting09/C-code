#include <stdio.h>
#include <math.h>

int main() {
    int side1, side2, side3;
    scanf("%d %d %d", &side1, &side2, &side3);

    // 確保 side1 為最大邊長
    if (side1 < side2) {
        int temp = side1;
        side1 = side2;
        side2 = temp;
    }
    if (side1 < side3) {
        int temp = side1;
        side1 = side3;
        side3 = temp;
    }
    if (side2 < side3) {
        int temp = side2;
        side2 = side3;
        side3 = temp;
    }

    if (side1 >= side2 + side3) {
        printf("無法構成一個三角形。\n");
    } else {
        int side1Square = side1 * side1;
        int side2Square = side2 * side2;
        int side3Square = side3 * side3;

        if (side1Square == side2Square + side3Square) {
            printf("直角三角形\n");
        } else if (side1Square > side2Square + side3Square) {
            printf("鈍角三角形\n");
        } else {
            printf("銳角三角形\n");
        }
    }

    return 0;
}
