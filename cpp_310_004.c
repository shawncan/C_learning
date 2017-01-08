#include <stdio.h>

int main()/*输入夸水数求水分子*/
{
	int a = 0;
	int b = 0;
	
	printf("请输入水的夸脱数：");
	scanf("%d", &a);
	
	b = (a * 950) / 3e-23;
	
	printf("其中包含的水分子为：%dg", b);
	
	return 0;
}