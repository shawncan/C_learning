#include <stdio.h>

/*4.2章练习题_100以内的素数筛选*/
int main()
{
	//定义变量
	int x;
	int cnt = 0;
//	int i;
//	int isPrime = 1;
	
	//筛选100以内的素数	
	for (x = 2; x <= 100; x++){
		int i;
		int isPrime = 1;
		for(i = 2; i < x; i++){
			if (x % i == 0){
				isPrime = 0;
				break;
			}
		}
		if (isPrime == 1){
			cnt ++;
			printf("%d\t", x);
			if (cnt % 5 == 0){
				printf("\n");
			}
		} 
	}

	printf("\n");
	
	return 0;
}