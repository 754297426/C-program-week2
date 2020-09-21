#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	float F, C;
	printf("ÊäÈë»ªÊÏÎÂ¶È£º");
	scanf("%f", &F);
	C = 5 * (F - 32) / 9;
	printf("Clesius=%f", C);
	return 0;
}