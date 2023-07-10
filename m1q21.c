#include <stdio.h>
int main()
{
    int x;
    int y;
    int r=0;
    scanf("%d %d", &x,&y);
    r=x*x+y*y;
    if (r<=100*100+100*100){
        printf( "in\n");
        return 0;
    }else{
        printf( "out\n");
        return 0;
    }
    
    
    return 0;
}
