#include<stdio.h>
#include<math.h>
int fact(int n)
{
 int p=1;
 int i;
 for(i=1;i<=n;i++)
 p=p*i;
 return p;
 }
float taylor(int n,float x)
 { float s=0;
 int i;
  for(i=0;i<=n;i++)
  {
   s=s+(pow(-1,(i+1))*(pow(x,2*i-1))/(fact(2*i-1)));
   }
   return s;
   }
   int main()
   {
    int n;
    printf("Enter the limit of Taylor's series to be printed");
    scanf("%d",&n);
    float x;
    printf("Enter the value of x");
    scanf("%f",&x);
    printf("The value of Taylor's series for your input is %f",taylor(n,x));
    return 0;
    }
