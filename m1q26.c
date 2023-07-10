#include <stdio.h>

int main() {
    int poewr;
    float money1=0;
    float money2=0;

    scanf("%d", &poewr);

    if (poewr >=701) {
        money1=120*2.1+(330-120)*3.02+(500-330)*4.39+(700-500)*4.97+(poewr-700)*5.63;
        money2=120*2.1+(330-120)*2.68+(500-330)*3.61+(700-500)*4.01+(poewr-700)*4.50;
        printf("%.2f\n%.2f\n", money1,money2);
    } else if (poewr >=501) {
        money1=120*2.1+(330-120)*3.02+(500-330)*4.39+(poewr-500)*4.97;
        money2=120*2.1+(330-120)*2.68+(500-330)*3.61+(poewr-500)*4.01;
        printf("%.2f\n%.2f\n", money1,money2);
    } else if (poewr >=331) {
        money1=120*2.1+(330-120)*3.02+(poewr-330)*4.39;
        money2=120*2.1+(330-120)*2.68+(poewr-330)*3.61;
        printf("%.2f\n%.2f\n", money1,money2);
    } else if(poewr >=121){
        money1=120*2.1+(poewr-121)*3.02;
        money2=120*2.1+(poewr-121)*2.68;
        printf("%.2f\n%.2f\n", money1,money2);
    } else{
        money1=(poewr-120)*2.1;
        money2=(poewr-120)*2.1;
        printf("%.2f\n%.2f\n", money1,money2);

    }

    return 0;
}
