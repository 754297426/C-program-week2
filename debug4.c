#include<stdio.h>
#define UnitPrice	789//使用define预处理指令定义符号常量UnitPrice，其值是789
int main()
{
    float goldMeasure1;//用float 声明名字是goldMeasure1的变量
	double goldMeasure2;//用double 声明名字是goldMeasure2的变量;
    double fingerRingPrice;
    goldMeasure1 = 8.987654321f;
    fingerRingPrice = UnitPrice*goldMeasure1;
    printf("计量工具1显示的戒指的质量是(小数点保留10位):%12.10f\n",goldMeasure1);
    printf("根据计量工具1给出戒指的价格是:%f\n",fingerRingPrice);
    goldMeasure2 = 8.987654321;
    fingerRingPrice = UnitPrice*goldMeasure2;
    printf("计量工具2显示的戒指的质量是(小数点保留10位):%12.10f\n",goldMeasure2);
    printf("根据计量工具2给出戒指的价格是:%f\n",fingerRingPrice);
    return 0;
}

