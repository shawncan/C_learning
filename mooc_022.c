#include <stdio.h>

int main()
{
	/*求平均数*/
	//初始化变量
	int sum = 0;
	int count = 0;
	int number;
	double dsum;
	
	//输入求平均数的值
	printf("请输入您需要求平均数的值已-1结束：\n");
	scanf("%d", &number);
	while(number != -1){
		sum += number;
		count++;
		scanf("%d", &number);
	}
	
	//求平均值
	dsum = sum / count;
	printf("以上数字平均数为：%.2f\n", dsum);
	
	return 0;
}