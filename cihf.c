#include<stdio.h>
#include<conio.h>
int a();
int c();
int main()
{
	a();
	c();
	return 0;
}
int a()
{
	float r;
	printf("Enter radius : ");
	scanf("%f",&r);
	float a;
	a=3.14*r*r;
	printf("Area of circle= %f cm^2\n",a);
	return 0;
}
int c()
{
	float ra;
	printf("Enter radius : ");
	scanf("%f",&ra);
	float c;
	c=2*3.14*ra;
	printf("Circumference of circle= %f cm\n",c);
	return 0;
}
