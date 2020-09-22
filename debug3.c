#include<stdio.h>
int main()
{
	int cupone,cuptwo;	//用int声明名字是cupOne,cupTwo的变量
    int temp;	//用int声明名字是temp的变量
    cupone = 12;
    cuptwo = 18;
    printf("cupOne中的液体体积是:%d\n",cupone);
    printf("cupTwo中的液体体积是:%d\n",cuptwo);
    temp=cupone;		//将cupOne赋值给temp
    cupone=cuptwo;	//将cupTwo赋值给cupOne
    cuptwo=temp;	 //将temp赋值给变量cupTwo
    printf("cupOne中的液体体积是:%d\n",cupone);
	printf("cupTwo中的液体体积是:%d\n",cuptwo);
	return 0;
}
