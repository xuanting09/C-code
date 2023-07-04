#include<stdio.h>
int main(int argc, char const *argv[])
{
    float a;
    float c;
    printf("輸入英哩");
    scanf("%f", &a);
    c = a * 1.6;
    printf("英里轉公里 %.2f", c);
    return 0;
}