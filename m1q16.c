#include <stdio.h>

#define PI 3.14159

int main() {
    float r, h;
    float c;

    printf("請輸入圓的半徑：");
    scanf("%f", &r);

    printf("請輸入圓柱的高：");
    scanf("%f", &h);

    c = PI * r * r * h;

    printf("圓柱體的體積為：%f\n", c);

    return 0;
}