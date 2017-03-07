#include<stdio.h>
int addn(int a,int sum)
{
 return (a+sum);
}
int main()
{
int n,a,i,sum=0;
printf("enter the total number of numbers to be added \n");
scanf("%d",&n);
printf("enter %d integers", n);
for(i=1;i<=n;i++)
{
    scanf("%d",&a);
    sum=addn(a,sum);
    }
printf("The sum is %d \n",sum);
return 0;
}
