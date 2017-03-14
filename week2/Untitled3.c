#include<stdio.h>
#include<math.h>
int poly(int n,int ar[n],int x)
{
 int i;
 int s=0;
 for(i=0;i<=n;i++)
 {
   s=s+(ar[i]*pow(x,i));
 }
 return s;
 }
 int main()
 {
  int n,ar[10],x,i;
  printf("Enter the degree of the polynomial");
  scanf("%d",&n);
  printf("Enter the value of x");
  scanf("%d",&x);
   for(i=n;i>=0;i--)
  {
   printf("Enter coefficient for x to the power %d",i);
   scanf("%d",&ar[i]);
   }
   printf("The result for the polynomial is %d",poly(n,ar,x));
   return 0;
   }
