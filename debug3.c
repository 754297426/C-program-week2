#include<stdio.h>
int main()
{
	int cupone,cuptwo;	//��int����������cupOne,cupTwo�ı���
    int temp;	//��int����������temp�ı���
    cupone = 12;
    cuptwo = 18;
    printf("cupOne�е�Һ�������:%d\n",cupone);
    printf("cupTwo�е�Һ�������:%d\n",cuptwo);
    temp=cupone;		//��cupOne��ֵ��temp
    cupone=cuptwo;	//��cupTwo��ֵ��cupOne
    cuptwo=temp;	 //��temp��ֵ������cupTwo
    printf("cupOne�е�Һ�������:%d\n",cupone);
	printf("cupTwo�е�Һ�������:%d\n",cuptwo);
	return 0;
}
