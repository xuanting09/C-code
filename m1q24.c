#include <stdio.h>

int main() {
    int month, day;
    scanf("%d", &month);
    scanf("%d", &day);

    if ((month == 1 && day >= 20) || (month == 2 && day <= 18))
        printf("水瓶座\n");
    else if ((month == 2 && day >= 19) || (month == 3 && day <= 20))
        printf("雙魚座\n");
    else if ((month == 3 && day >= 21) || (month == 4 && day <= 19))
        printf("白羊座\n");
    else if ((month == 4 && day >= 20) || (month == 5 && day <= 20))
        printf("金牛座\n");
    else if ((month == 5 && day >= 21) || (month == 6 && day <= 20))
        printf("雙子座\n");
    else if ((month == 6 && day >= 21) || (month == 7 && day <= 22))
        printf("巨蟹座\n");
    else if ((month == 7 && day >= 23) || (month == 8 && day <= 22))
        printf("獅子座\n");
    else if ((month == 8 && day >= 23) || (month == 9 && day <= 22))
        printf("處女座\n");
    else if ((month == 9 && day >= 23) || (month == 10 && day <= 22))
        printf("天秤座\n");
    else if ((month == 10 && day >= 23) || (month == 11 && day <= 21))
        printf("天蠍座\n");
    else if ((month == 11 && day >= 22) || (month == 12 && day <= 21))
        printf("射手座\n");
    else if ((month == 12 && day >= 22) || (month == 1 && day <= 19))
        printf("摩羯座\n");
    else
        printf("輸入無效\n");

    return 0;
}
