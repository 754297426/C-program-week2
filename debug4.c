#include<stdio.h>
#define UnitPrice	789//ʹ��defineԤ����ָ�����ų���UnitPrice����ֵ��789
int main()
{
    float goldMeasure1;//��float ����������goldMeasure1�ı���
	double goldMeasure2;//��double ����������goldMeasure2�ı���;
    double fingerRingPrice;
    goldMeasure1 = 8.987654321f;
    fingerRingPrice = UnitPrice*goldMeasure1;
    printf("��������1��ʾ�Ľ�ָ��������(С���㱣��10λ):%12.10f\n",goldMeasure1);
    printf("���ݼ�������1������ָ�ļ۸���:%f\n",fingerRingPrice);
    goldMeasure2 = 8.987654321;
    fingerRingPrice = UnitPrice*goldMeasure2;
    printf("��������2��ʾ�Ľ�ָ��������(С���㱣��10λ):%12.10f\n",goldMeasure2);
    printf("���ݼ�������2������ָ�ļ۸���:%f\n",fingerRingPrice);
    return 0;
}

