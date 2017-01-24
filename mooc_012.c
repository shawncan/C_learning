#include <stdio.h>

int main()
{
	//	初始化变量
	int price = 0;
	int bill = 0;
	int change = 0;
	
	//	输入金额和票面金额
	printf("请输入金额：");
	scanf("%d", &price);
	printf("请输入票面金额：");
	scanf("%d", &bill);
	
	//	计算找零
	change = bill - price;
	
	//	输出找零结果
	if (change >= 0 ){
		printf("找您%d元", change);
	}else{
		printf("你的钱不够，还差%d元", -change);
	}
	
	return 0;
}