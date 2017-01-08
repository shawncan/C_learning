#include <stdio.h>

int main()/*输入里面转化为英寸*/
{
	double a, b;
	
	printf("请输入您的身高（厘米）:");
	scanf("%lf", &a);
	
	b = a / 2.54;
	
	printf("您的身高为：%.2f英寸", b);
	
	return 0;
}