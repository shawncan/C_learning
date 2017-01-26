#include <stdio.h>

/*4.2章练习题_素数的判断*/
int main()
{
	//定义变量
	int x,i;
	int isPrime = 1;
	
	//输入需要判断的数字
	printf("请输入需要判断的数字：");
	scanf("%d", &x);
	
	//判断数字是否为素数
	for (i = 2; i < x; i++){
		if (x % i == 0){
			isPrime = 0;
			break;
		}
	}
	
	//输出判断结果
	if (x == 1) {
		printf("数字%d为不为素数\n", x);
	}else {
		if (isPrime ==1) {
			printf("数字%d为素数\n", x);
		}else{
			printf("数字%d为不为素数\n", x);
		}
	}
	
	return 0;
}