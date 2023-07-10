#include <stdio.h>
int main()
{
    int x;
    int x1;
    int y;
    int y1;
    int m=0;
    int m1=0;
    int toto=0;
    scanf("%d %d", &x,&y);
    scanf("%d %d", &x1,&y1);
    m=x*60+y;
    m1=x1*60+y1;
    if (m1-m<120){
        toto=((m1-m)/30)*30;
        printf( "%d\n",toto);
        return 0;
    }else if(240>m1-m & m1-m>120){
        toto=(m1-m-120)/30*40+120;
        printf( "%d\n",toto);
        return 0;
    }else if(240<m1-m){
        toto=(m1-m-240)/30*60+120+160;
        printf( "%d\n",toto);
        return 0;
    }
}
    