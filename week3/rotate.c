 #include<stdio.h>
 int rotate(unsigned int x,unsigned int n)
 { int i;
 for(i=1;i<=n;i++)
 {
   if(x%2==0)
   x=x>>1;
   else
   {
     x=x>>1;
     x=x+(1<<31);
   }
  }
 return x;
 }
 void main()
 {
  unsigned int x,n,result;
  printf("Enter the value of x:");
  scanf("%u",&x);
  printf("Enter how many times to rotate");
  scanf("%u",&n);
  result=rotate(x,n);
  printf("The rotated number now is: \v %u",result);
 }
