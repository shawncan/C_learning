#include <stdio.h>


int main()
{
	//初始化变量
	int n;
	int m;
	int i;
	
	//输入求公约数数值
	printf("请输入需要求最大公约数的值：");
	scanf("%d %d", &n, &m);
	
	//用辗转相除法计算
	int origin_n = n;
	int origin_m = m;
	
	while ( m != 0){
		i = n % m;
		n = m;
		m = i; 
	}
	
	//输出最大公约数
	printf("%d和%d的最大公约数为：%d", origin_n, origin_m, n);
	
	return 0;
}