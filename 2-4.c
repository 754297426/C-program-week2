#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	float F, C;
	C = 27.0;
	F = (9 * C / 5) + 32;
	printf("celsius=27,fahr=%.0f", F);
	return 0;
}