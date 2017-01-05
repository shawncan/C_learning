#include <stdio.h>

int main()
{
	int price = 0;
	
	printf("请输入您的金额（元）：");
	scanf("%d", &price);
	
	int change = 100 - price;
	
	printf("找您%d", change);
	
	return 0;
}