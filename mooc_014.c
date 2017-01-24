#include <stdio.h>

int main()
{
	//	常量设置
	const double RATE = 8.25;
	const int STANDARD = 40;
	
	//	初始化变量
	double pay = 0.0;
	int hours = 0;
	
	//输入工作时间
	printf("请输入工作的小时数：");
	scanf("%d", &hours);
	
	//	输出应付工资
	if (hours > STANDARD){
		pay = STANDARD * RATE + (hours - STANDARD) * (RATE * 1.5);
	}else{
		pay = hours * RATE;
	}
	
	printf("您的应付工资为：%.2f美金",pay);
	
	return 0;
}