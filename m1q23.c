#include<stdio.h>

int main() {
    int month;
    
    scanf("%d", &month);
    if (0<month & month< 13){
        if (3 <=month & month<=5){
            printf("Spring\n");
        }
        else if (6 <=month & month<=8){
            printf("Summer\n");
        }
        else if (9 <=month & month<=11){
            printf("Autumn\n");
        }else
        {
            printf("Winter\n");
        }
        
    }else{
        printf("no this month\n");
    }
    return 0;
}