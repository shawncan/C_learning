#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	//初始化变量
	srand(time(0));
	int number = rand()%100+1;
	int count = 0;
	int a = 0;
	
//	//输入值
//	printf("我已经产生了一个100以内的随机数，你快来猜吧\n");
//	scanf("%d", &count);
//	
//	//判断是否相等
//	while (count != number) {
//		if (count > number){
//			printf("你输入的数字大了哟，再来输入吧\n");
//		}else{
//			printf("你输入的数字小了哟，再来输入吧\n");
//		}
//		a++;
//		scanf("%d", &count);
//	}
//	

	//输入值判断是否相等
	printf("我已经产生了一个100以内的随机数，你快来猜吧\n");
	
	do{
		scanf("%d", &count);
		
		if (count > number){
			printf("你输入的数字大了哟，再来输入吧\n");
		}else if (count < number){
			printf("你输入的数字小了哟，再来输入吧\n");
		}
		a++;
	}while (count != number);
	
	//输出结果
	printf("恭喜你猜对了，你一共用了%d次，下次再努力哟！", a);
	
	return 0;
}