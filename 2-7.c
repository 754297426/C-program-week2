#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	float F, C;
	printf("���뻪���¶ȣ�");
	scanf("%f", &F);
	C = 5 * (F - 32) / 9;
	printf("Clesius=%f", C);
	return 0;
}