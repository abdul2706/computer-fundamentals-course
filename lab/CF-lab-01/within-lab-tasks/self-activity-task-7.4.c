#include <stdio.h>
#include <math.h>
#define PI 3.14
int main() {
	double cVal, rVal, dVal;
	for(int i=0; i<=2; i++) {
		printf(" Enter an Angle in degrees : ");
		scanf("%lf", &dVal);
		rVal = dVal * (PI/180);
		cVal = cos(rVal);
		printf("\n The Cosine value of %f = %f ", dVal, cVal);
		printf("\n");
	}
	return 0;
}
