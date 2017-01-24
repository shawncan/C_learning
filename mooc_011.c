#include <stdio.h>

int main()
{
	int hour1, minute1;
	int hour2, minute2;
	
	printf("请输入时间：\n");
	scanf("%d %d", &hour1, &minute1);
	scanf("%d %d", &hour2, &minute2);
	
	int t1 = hour2 - hour1;
	int t2 = minute2 - minute1;
	
	if ( t2 < 0){
		t2 = 60 + t2;
		t1 --;
	}
	
	printf("时间差为:%d小时%d分钟。", t1, t2);
	
	return 0;
}