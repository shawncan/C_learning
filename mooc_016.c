#include <stdio.h>

int main()
{
	//初始化变量
	int a, b, c;
	
	//输入比较的值
	printf("请输入你要比较的三个数：");
	scanf("%d %d %d", &a, &b, &c);
	
	//输出比较的结果
	if (a > b){
		if (a > c){
			printf("三个值中最大的为：%d", a);
		}else{
			printf("三个值中最大的为：%d", c);
		}
	}else{
		if (b > c){
			printf("三个值中最大的为：%d", b);
		}else{
			printf("三个值中最大的为：%d", c);
		}
	}
	
	return 0;
}