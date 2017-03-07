#include<stdio.h>
struct complex{
  int re;
  int im;
};
struct complex findsum(int n){
int i,re[n],im[n];
struct complex num;
for(i=0;i<n;i++){
   printf("enter real and complex part of number :");
   scanf("%d %d",&re[i],&im[i]);
   num.re+=re[i];
   num.im+=im[i];
 }
return num;
}
int main(){
int n;
struct complex num;
printf("how many complex numbers do you to add:");
scanf("%d",&n);
num=findsum(n);
printf("sum is %d+i%d",num.re,num.im);
return 0;
}
