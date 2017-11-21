#include<stdio.h>
int main()
{
	float r,h,pi,c,s,v;
	printf("Please Enter r and h:");
	scanf("%f%f",&r,&h);
	pi=3.1415926;
	c=2*pi*r;
	s=pi*r*r;
	v=s*h;
	printf("C=%4.2f,S=%4.2f,V=%4.2f",c,s,v);
	return 0;
}
