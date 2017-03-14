#include<stdio.h>
#include<math.h>
double squareroot(int num)
{
 double x1=(num)/2;
 double x2=(x1+(num/x1))/2;
 while(abs(x1-x2)>=0.0000000001)
 {
   x1=x2;
   x2=((x1+(num/x1))/2);
   }
   return x2;
   }
   int main()
   {
   int num;
   printf("Enter the number whose square root is needed \n");
   scanf("%d",&num);
   printf("The square root for the number is %lf",squareroot(num));
   return 0;
   }
