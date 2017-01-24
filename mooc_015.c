#include <stdio.h>

int main()
{
	// 设置常量
	const int PASS = 60;
	
	//	初始化变量
	int score = 0;
	
	//	输入分数
	printf("请输入您的成绩：");
	scanf("%d", &score);
	
	//	输出成绩
	if (score >= PASS){
		printf("恭喜您，这次期末考试及格拉！");
	}else{
		printf("不好意思，这次期末考试没有及格");
	}
	
	printf("下次再来！");
	
	return 0;
}