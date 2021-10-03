#include <stdio.h>
#include <math.h>

_Bool isInArea(double x, double y)
{
	return (x >= -1 && x <= 1 && y >= -1 && y <= 1 && y >= x);
}
double f(double(x))
{
	return x <= 3 ? (pow(x, 2) - 3 * x + 9) : 1 / (pow(x, 3) + 6);
}

double f(double(x));

void main(void)
{
	double x, y;
	int k;
	printf("Choose task1(1) or task2(2)\n");
	scanf("%d", &k);
	switch (k)
	{
	case 1:
		printf("Enter x=");
		scanf("%lf", &x);
		printf("Enter y=");
		scanf("%lf", &y);
		if (isInArea(x,y)==1)
			printf("The coordinates of the point BELONG to the region");
		else
			printf("The coordinates of the point DO NOT BELONG to the region");
		break;
	case 2:
		printf("Enter x=");
		scanf("%lf", &x);
		printf("f=%.5lf\n", f(x));
		break;
	default:
		printf("Wrong input");
		break;
	}
}
