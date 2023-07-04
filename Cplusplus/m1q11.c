#include<stdio.h>

int main() {
    int num, password, one, two, three, four;

    printf("請輸入一個四位數: ");
    scanf("%d", &num);

    // 加密步驟1
    one = (num / 1000 + 7) % 10;
    two = (num / 100 % 10 + 7) % 10;
    three = (num / 10 % 10 + 7) % 10;
    four = (num % 10 + 7) % 10;

    // 加密步驟2
    password = three * 1000 + four * 100 + one * 10 + two;

    printf("加密後的數字為: %04d\n", password);

    return 0;
}