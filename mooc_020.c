#include <stdio.h>

int main()
{	
	const int TIME = 800;
	
	int bjt, utc;
	
	printf("请输入BJT时间（905表示9点5分）：");
	scanf("%d", &bjt);
	
	if ( bjt > TIME){
		utc = bjt - TIME;
	}else if ( bjt == TIME) {
		utc = 0;
	}else{
		utc = 2400 - (TIME - bjt);
	}
	
	
	printf("UTC时间为：%d", utc);
	
	return 0;
}