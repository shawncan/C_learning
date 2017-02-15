#include <stdio.h>

/*5.1章练习题_函数应用*/
int isPrime(int i)
{
	int t;
	int ret = 1;
	for(t = 2; t < i; t++){
		if (i % t == 0){
			ret = 0;
			break;
		}
	}
	
	return ret;	
}


int main()
{
	//定义变量
	int x;
	int cnt = 0;

	//筛选100以内的素数	
	for (x = 2; x <= 100; x++){
		if (isPrime(x)){
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