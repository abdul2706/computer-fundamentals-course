#include<stdio.h>

int main()
{
	int x = 12, y = 1;
	printf("Initial value of x = %d\n", x); // print the initial value of x
	printf("Initial value of y = %d\n\n", y); // print the initial value of y
	y = x++; // use the current value of x then increment it by 1
	printf("After incrementing by 1: x = %d\n", x);
	printf("y = %d\n\n", y);
	y = x--; // use the current value of x then decrement it by 1
	printf("After decrementing by 1: x = %d\n", x);
	printf("y = %d\n\n", y);
	// Signal to operating system everything works fine
	return 0;
}
