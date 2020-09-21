#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int H;
	float G;
	printf("输入一个身高H（101-300（CM）:");
	scanf("%d", &H);
	G = ((H - 100) * 0.9) * 2;
	printf("%.1f", G);
	return 0;
}