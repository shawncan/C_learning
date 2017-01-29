#include <stdio.h>

/*4.3章练习题_求和*/
int main()
{
	//初始化变量
	int n, i ;
	double ret = 0.0;
	
	//输入数值
	printf("请输入需要求和的变量：");
	scanf("%d", &n);
	
	//求和
	for (i = 1; i <= n; i++){
		ret += 1.0 / i;
	}
	
	//输出求和值
	printf("%d的和为：%.2f", n, ret);
	
	return 0;
}