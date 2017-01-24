#include <stdio.h>

int main()
{
	//连续if判断
	int a = 0;
	int f = 0;
	
	printf("请输入a的值:");
	scanf("%d", &a);
	
	if ( a < 0 ){
		f = -1;
	} else if ( a == 0 ){
		f = 0;
	} else if ( a > 5 ){
		f = a * 2;
	} else {
		f = a * 3;
	}
	
	printf("f的值等于：%d", f);
	
	return 0;
}