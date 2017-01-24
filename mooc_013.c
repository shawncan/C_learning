#include <stdio.h>

int main()
{
	//	初始化常量
	const int MINOR = 35;
	
	//	初始化变量
	int age = 0;
	
	//	输入年龄
	printf("请输入您的年龄：");
	scanf("%d", &age);
	
	//	输出年龄
	printf("您的年龄是%d岁。\n", age);
	
	//	输出对年龄的评价
	if (age < MINOR){
		printf("年轻真美好，年龄决定了你的精神世界，加油吧！！！");
	}else{
		printf("虽然不在年轻，但仍旧志存高远，加油吧！");
	}
	
	return 0;
}