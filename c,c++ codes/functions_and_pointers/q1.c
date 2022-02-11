#include <stdio.h>
#include <math.h>

double dist(double,double,double,double);
double area(double, double, double);
int isInside(double, double, double, double, double, double, double, double);

int main() {
	double x1, x2, x3, y1, y2, y3, x, y;
	
	printf("Enter x1: ");
	scanf("%lf", &x1);
	printf("Enter y1: ");
	scanf("%lf", &y1);
	printf("Enter x2: ");
	scanf("%lf", &x2);
	printf("Enter y2: ");
	scanf("%lf", &y2);
	printf("Enter x3: ");
	scanf("%lf", &x3);
	printf("Enter y3: ");
	scanf("%lf", &y3);

	printf("The area of the triangle is %lf\n", area(dist(x1, y1, x2 ,y2),dist(x2, y2, x3 ,y3), dist(x3, y3, x1 ,y1)));

	printf("Enter a point to check if it is inside the triangle\n ");
	printf("Enter the x co-ordinate: ");
	scanf("%lf", &x);
	printf("Enter the y co-ordinate: ");
	scanf("%lf", &y);
	if(isInside(x1, y1, x2, y2, x3, y3, x, y))
		printf("The point is inside.\n");
	else
		printf("The point is outside.\n");
	return 0;
}

double dist(double x1, double y1, double x2, double y2) {
	return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));
}

double area(double a, double b, double c) {
	double s = (a + b + c)/2;
	return sqrt(s*(s-a)*(s-b)*(s-c));
}

int isInside(double x1, double y1, double x2, double y2, double x3, double y3, double x, double y) {
	double a = area(dist(x1, y1, x2 ,y2),dist(x2, y2, x3 ,y3), dist(x3, y3, x1 ,y1));
	double b = area(dist(x, y, x2 ,y2),dist(x2, y2, x3 ,y3), dist(x3, y3, x ,y));
	double c = area(dist(x1, y1, x ,y),dist(x, y, x3 ,y3), dist(x3, y3, x1 ,y1));
	double d = area(dist(x1, y1, x2 ,y2),dist(x2, y2, x ,y), dist(x, y, x1 ,y1));
	
	if(a == b+c+d) {
		return 1;
	}
	
	return 0;
}
