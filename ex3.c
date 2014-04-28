#include <stdio.h>
#include <math.h>

int main()
{
	int age;
	int height = 0;

	printf("I am %d years old.\n", age);
	printf("I am %d inches tall.\n", height + 1*15);
	fprintf(stdout, "pi = %.5f\n", 4 * atan(1.0));


	return 0;
}