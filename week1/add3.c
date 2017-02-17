#include<stdio.h>
int add(int a,int b,int c)
 {
   int d=a+b+c;
   return d;
  }
int main()
 { 
   int x,y,z,u;
   printf("Enter three numbers");
   scanf("%d %d %d",&x,&y,&z);
   u=add(x,y,z);
   printf("The sum of three numbers is %d",u);
   return 0;
  }

