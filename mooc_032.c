#include <stdio.h>

/*4.2章练习题_用1毛2毛5毛凑钱*/
int main()
{
	//定义变量
	int x;
	int one, two, five;
	
	//输入需要计算的值
	printf("请输入需要计算的值：");
	scanf("%d", &x);
	
	//计算凑钱方案
	for (one = 1; one < x * 10; one++){
		for (two = 1; two < x * 10 / 2; two++){
			for (five = 1;five < x * 10 / 5; five++) {
				if (one + two * 2 + five * 5 == x * 10){
					printf("可以用%d个1角加%d个2角加%d个5角得到%d元\n", one, two, five, x);
					goto out;
				}
			}
		}
	}
	out:
	
	return 0;
}