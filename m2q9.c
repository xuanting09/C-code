#include<stdio.h>
int main()
{
   
    
   int a, b, a1, b1, temp; 
   scanf("%d %d", &a1, &b1); 
   a=a1;  
   b=b1; 
   while(b1!=0) 
   {
       temp=a1%b1; 
       a1=b1; 
       b1=temp;
   }
   printf("%d\n", a1);
   printf("%d\n", a*b/a1);
}