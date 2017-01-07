#include <stdio.h>

int main()
{
	int a, b;
	
	printf("请输入数字：");
	scanf("%d %d", &a, &b);
	
	double c = (a + b) / 2.0;
	
	printf("%d和%d的平均数为：%.2f", a, b, c);
	
	return 0;
}