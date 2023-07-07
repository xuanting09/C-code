#include<stdio.h>

int main() {
    int x;
    int y;
    float i;
    scanf("%d %d", &y,&x);

    if (x ==1) {
        i = (y-80)*0.7;
        printf("結果： %f\n", i);
    } else if (x == 2) {
        i = (y-70)*0.6;
        printf("結果： %f\n", i);

    } else {
        printf("輸入值無效\n");
        return 0;
    }

    return 0;
}
