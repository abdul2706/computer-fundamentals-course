#include <stdio.h>
#include <math.h>

int main() {
	double a;
	double z;
	a = 4.3;
	z = sin(a);
	printf("sin(%.2lf) = %.2lf\n", a, z);
	a = -4.3;
	z = sin(a);
	printf("sin(%.2lf) = %.2lf\n", a, z);
	a = 45;
	z = sin(a);
	printf("sin(%.2lf) = %.2lf\n", a, z);
	return 0;
}
