#include <stdio.h>

/*4.3章练习题_正序输出数字*/
int main()
{
	//初始化变量
	int n;
	int t;
	int d;
	int mask = 1;
	
	//输入数字
	printf("请输入需要转化的数字：");
	scanf("%d", &n);
	
	//计算mask的值
	t = n;
	while ( t > 9){
		t /= 10;
		mask *= 10;
	}
	
	//按照顺序依次输出数字
	do{
		d = n / mask;
		printf("%d", d);
		if (mask > 9){
			printf(" ");
		}
		n %= mask;
		mask /= 10;
	} while (mask > 0);
	
	return 0;
}