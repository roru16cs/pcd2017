#include<stdio.h>
struct complex
{
    float real;
    float imag;
};
struct complex add(complex n1,complex n2)
{
complex sum;
sum.real=n1.real + n2.real;
sum.imag=n1.imag + n2.imag;
return(sum);
}
int main()
{
struct complex n1,n2,sum;
printf("For first complex number \n");
printf("Enter real and imaginary part respectively \n");
scanf("%f %f",&n1.real,&n1.imag);
printf("For second complex number \n"); 
printf("Enter real and imaginary part respectively \n");
scanf("%f %f",&n2.real,&n2.imag);
sum=add(n1,n2);
printf("sum=%f+%f.i",sum.real,sum.imag);
return 0;
}
