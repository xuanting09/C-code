#include <stdio.h>

int main() {
    int listening, reading, speaking;
    int time;
    int total;
    scanf("%d", &time);
    for (int i = 0; i < time; i++) {
    scanf("%d %d %d", &listening, &reading, &speaking);

    
    total = listening + reading + speaking;

    if (listening >= 60 && reading >= 60 && speaking >= 60) {
        printf("P\n");
    } else if (total > 220) {
        printf("P\n");
    } else if ((listening < 60 && reading >= 80 && speaking >= 60) ||
               (listening >= 80 && reading < 60 && speaking >= 60) ||
               (listening >= 80 && reading <= 60 && speaking < 60) ||
               (listening >= 60 && reading >= 60 && speaking < 60)) {
        printf("M\n");
    } else {
        printf("F\n");
    }}



    

    return 0;
}
