#include<stdio.h>
int main()
{
	int a, b, c, d;
	unsigned u, v;
	a = 1, b = 3, c = 6, d = -7;
	u = a + b,v = c + d;
	printf("u=%d,v=%u\n", u, v);
	return 0;
}