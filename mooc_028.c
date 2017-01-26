#include <stdio.h>

/*4.1章练习题*/
int main()
{
	//初始化变量
	int n = 0;
	int x = 1;
	int i;
	
	//输入乘介数
	printf("请输入需要求的乘介数：\n");
	scanf("%d", &n);
	
	//计算乘介数
	for (i = 1;i <= n;i++){
		x = x * i;
	}
	
	//输出乘介计算结果
	printf("%d的乘介为：%d", n, x);
	
	return 0;
}