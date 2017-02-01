#include <stdio.h>

int main()
{
	//初始化变量
	int n;
	int m;
	int max;
	int i;
	int ret;
	
	//输入数值
	printf("请输入需要求公约数的值：");
	scanf("%d %d", &n, &m);
	
	//确认最大的数值
	if (n > m){
		max = n;
	} else {
		max = m;
	}
	
	//枚举最大公约数
	for (i = 1; i < max ; i++){
		if (n % i == 0){
			if (m % i == 0){
				ret = i;
			}
		}
	}
	
	//输出最大公约数
	printf("%d与%d的最大公约数为：%d", n, m, ret);
	
	return 0;
}