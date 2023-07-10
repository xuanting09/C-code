#include<stdio.h>

int main() {
    int sum=0;
    int um=1;
    while (um<=100);
    {
        sum+=um;
        um++;
    }
    printf("%d",sum);
}

// #include <stdio.h>

// int main() {
//     int sum = 0;
//     int num = 1;

//     while (num <= 100) {
//         sum += num;
//         num++;
//     }

//     printf("總和：%d\n", sum);

//     return 0;
// }