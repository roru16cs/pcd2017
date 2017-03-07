#include<stdio.h>
#include<math.h>
struct complex
{
	float re,im;
};

struct quad
{
	struct complex r1,r2;
};

int roots(float a,float b,float c,struct quad *r)
{
	if (a==0)
	return(-1);

	float d=(b*b)-(4*a*c);

	if (d==0)
	{
	r->r1.re=r->r2.re=-b/(2*a);
	r->r1.im=r->r2.im=0;
	return 0;
	}
	else if(d>0)
	{
	r->r1.re=(-b+sqrt(d))/(2*a);
	r->r1.im=r->r2.im=0;
	r->r2.re=(-b-sqrt(d))/(2*a);
		return 1;
	}
	else
	{
	r->r1.re=-b/(2*a);
	r->r1.im=sqrt(0-d)/(2*a);
		return 2;
	}
}
int showRoots(struct quad r)
{
	if(r.r1.im==0)
	printf("roots are %f and %f",r.r1.re,r.r2.re);
        else
	printf("roots are %f+i%f and %f-i%f ",r.r1.re,r.r1.im,r.r1.re,r.r1.im);
	return 0;
}

int main()
{
	int a,b,c;
	struct quad x;
	printf("give values of a,b,c ");
	scanf("%d%d%d",&a,&b,&c);
	roots(a,b,c,&x);
	showRoots(x);
	return 0;
}

