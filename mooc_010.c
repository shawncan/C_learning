#include <stdio.h>

int main()
{
//	int a = 5;
//	int b = 6;
//	int t = 0;
	
//	t = a;
//	a = b;
//	printf("a=%d\n", a);
//	
//	b = t;
//	printf("b=%d", b);
	int integer = 0;
	int a, b, c, t;
	printf("请输入正三位数：");
	scanf("%d", &integer);
	
	a = integer/100;
	b = (integer/10)%10;
	c = integer%10;
	t = (c * 100) + (b * 10) +(a);
	
	printf("逆序的数字：%d", t);
	
	return 0;
}