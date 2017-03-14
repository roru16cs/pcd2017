#include<stdio.h>
int leap(int yr)
{
 if(yr%400==0)
 printf("%d is a leap year \n",yr);
 else if(yr%100==0)
 printf("%d is not a leap year \n",yr);
 else if(yr%4==0)
 printf("%d is a leap year",yr);
 else
 printf("%d is not a leap year",yr);
 return 0;
 }
 int main()
 {
 int yr;
 printf("Enter the year to be checked");
 scanf("%d",&yr);
 leap(yr);
 return 0;
 }
