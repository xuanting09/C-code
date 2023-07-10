#include<stdio.h>

int main() {
    int toto=0;
    int x;
    int y;
    int z;
    int toto1=0;
    int a=0;
    int b=0;
    int c=0;
    scanf("%d %d %d %d", &toto,&x,&y,&z);
    if (toto < x*15+y*20+z*30){
        printf("0");
        return 0;
    }else{
        toto1=toto-(x*15+y*20+z*30);
        a=toto1/50;
        b=(toto1-(50*a))/5;
        c=toto1-(50*a+5*b);
        printf("%d\n%d\n%d\n",c,b,a);
    }
    return 0;
}