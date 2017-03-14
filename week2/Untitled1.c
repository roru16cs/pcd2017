#include<stdio.h>
int revint(int n)
{
 int r,s=0;
 int num=n;
 while(num!=0)
 {
   r=num%10;
   s=s*10+r;
   num=num/10;
   }
   return s;
   }
   int main()
   {
    int num;
    printf("Enter the number to be reversed");
    scanf("%d",&num);
    printf("The number after the reversal is %d \n",revint(num));
    return 0;
    }
