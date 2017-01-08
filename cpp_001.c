#include <stdio.h>

//void a();
//void b();
void two();
void one_three();

int main()
{
/*输出姓名*/
//	printf("王佳灿\n");
//	printf("王\n佳灿\n");
//	printf("王 佳灿");

/*输出姓名、地址*/	
//	printf("王佳灿\n浙江省杭州市萧山区");

/*简单的把年龄转化为天数*/	
//	int age = 0;
//	int days = 0;
//	
//	printf("请输入您的年龄：");
//	scanf("%d", &age);
//	
//	days = age * 365;
//	
//	printf("您目前存活的天数为：%d", days);

/*调用其他函数，写a、b2个函数在main中调用*/	
//	printf("For he's a jolly good fellow!\n");
//	a();
//	printf("For he's a jolly good fellow!\n");
//	b();

/*求toes的和与平方*/	
//	int toes = 10;
//	printf("toes=%d\ntoes+toes=%d\ntoes的平方=%d", toes, toes + toes, toes * toes);

/*其他函数的调用*/	
	printf("starting now:\n");
	one_three();
	printf("done!");

	return 0;
}

//void a()
//{
//	printf("For he's a jolly good fellow!\n");
//}
//
//void b()
//{
//	printf("which nobody can deny!\n");
//}

void tow()
{
	printf("tow\n");
	
}

void one_three()
{
	printf("one\n");
	tow();
	printf("three\n");
	
}
//函数的调用也要按照顺序写，因为程序是按照一行一行执行的，如果不从上到下写回发生执行时该函数还没被执行到，就找不到对象了