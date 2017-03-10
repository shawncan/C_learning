#include <stdio.h>

/*6.1章编程题_多项式加法*/
int main()
{
	//初始化变量值
	const int number = 10;
	int coefficient[number];
	int i;
	int power;
	int x;
	int a;
	
	//初始化数组（设置数组每个位置的值都为1）
	for (i = 0; i <= number ; i++){
		coefficient[i] = 1;
	}
	
	do{
		scanf("%d %d", &power, &x);
		
		coefficient[power] *= x;
//		printf("%d\n", power);
		
	} while ( power != 0); 
	
	for (a = 0; a <= number ; a++){
		if (coefficient[a] != 1){
			printf("%d*%d", coefficient[a], a);
		} else {
			continue;
		}
	}
	
//	{
//		int i;
//		for (i = 0; i <= number ; i++){
//			printf("%d %d\n", i, coefficient[i]);
//		}
//	}
//	
	
	return 0;
}