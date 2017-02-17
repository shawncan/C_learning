#include <stdio.h>

/*5.1章练习题_写交换ab的值的函数*/

void swap(int x, int y);

int main()
{
	int a, b;
	
	printf("请输入a跟b的值：");
	scanf("%d %d", &a, &b);
	
	swap(a, b);
	
	return 0;
}

void swap(int x, int y)
{
	int t = 0;
	
	t = x;
	x = y;
	y = t;
	 
	printf("a=%d, b=%d", x, y);
}