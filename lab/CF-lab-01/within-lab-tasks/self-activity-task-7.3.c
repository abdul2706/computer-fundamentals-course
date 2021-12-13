#include <stdio.h>
#include <math.h>
#define PI 3.141592654
int main() {
	double gt = 3.60, z;
	z = sinh(gt);
	printf("Sine hyperbolic of %.2lf is = %.2lf", gt, z);
	return 0;
}
