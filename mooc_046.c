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
    int order = 0;
	
	//初始化数组的值都为0
	for (i = 0; i <= number ; i++){
		coefficient[i] = 0;
	}
	
	//输入2个多项式，以输入2次0冥次为截止
	do{
		scanf("%d %d", &power, &x);
		coefficient[power] += x;
		if (power == 0){
			order+=1;
		}
	} while ( order != 2);
	
	//输出多项式计算的结果
	for (a = number; a >= 0 ; a--){
		if (coefficient[a] != 0){
			if (a == 1){
				printf("%dx+", coefficient[a]);
			}else if (a == 0){
				printf("%d", coefficient[a]);
			}else{
				printf("%dx%d+", coefficient[a], a);
			}
		} else {
			continue;
		}
	}
	
	return 0;
}