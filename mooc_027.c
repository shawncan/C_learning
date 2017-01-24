#include <stdio.h>

/*第三周变成测试题*/
int main()
{
	//初始化变量
	int digital = 0;
	int odd_number = 0;
	int even = 0;
	
	//输入数字
	printf("请输入数字（以-1结束）：\n");
	scanf("%d", &digital);
	
	//判断奇数偶数并记录
	while (digital != -1){
		if ((digital % 2) == 0) {
			even++;
		}else {
			odd_number++;
		}
		scanf("%d", &digital);		
	}
	
	//输出奇数偶数个数
	printf("奇数：%d个，偶数：%d个", odd_number, even);
	
	return 0;
}