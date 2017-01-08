#include <stdio.h>

int main()
{
	float a;
	
	printf("请输入浮点数：");
	scanf("%f", &a);
	
	printf("The input is %f or %e", a, a);
	
	return 0;
}