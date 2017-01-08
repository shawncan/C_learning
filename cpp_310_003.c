#include <stdio.h>

int main()/*输入年龄计算你的存活时间*/
{
	int a = 0;
	int b = 0;
	
	printf("请输入您的年龄：");
	scanf("%d", &a);
	
	b = a * 3.156e7;
	
	printf("恭喜您已经在地球上存活：%d秒", b);
	
	return 0;
}