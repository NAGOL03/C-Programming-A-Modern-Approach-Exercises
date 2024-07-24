/*
Write a program that computes the volume of a sphere with a 10-meter radius, using the formulav = 4/3pi^3.
Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3. What happens?) Hint: C doesn't have an exponentiation operator,
so you'll need to multiply r by itself twice to compute r^3.
*/
#include <stdio.h>

#define M_PI 3.14159265358979323846

float exponent(float base, float x) {
	if (x == 0) {
		return 1.0f;
	}

	for (float i = x, b = base; i > 1; i--) {
		base *= b;
	}

	return base;
}

float computeVolumeSphere(float radius) {
	float volume = 4.0f / 3.0f * M_PI * exponent(radius, 3);
	return volume;
}

int main(void) {
	printf("%.2f", computeVolumeSphere(10));
	return 0;
}