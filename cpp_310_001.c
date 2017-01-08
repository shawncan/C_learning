#include <stdio.h>

int main()/*输入ASCII码值，输出对应的字符*/
{
	int a;
	
	printf("请输入ASCII码值：");
	scanf("%d", &a);
	
	printf("a对应的字符为：%c", a);
	
	return 0;
}