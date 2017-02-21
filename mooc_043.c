#include <stdio.h>

/*第5章作业题_质因数分解式*/
int prime(int x)
{
	int i;
	int isPrime = 1;
	
	for (i = 2; i < x; i++){
		if (x % i == 0){
			isPrime = 0;
			break;
		}
	}
	
	return isPrime;
}

int main()
{
	int a;
	
	scanf("%d", &a);
	printf("%d=", a);
	
	while (prime(a) == 0) {
		int i;
		
		for (i = 2; i < a; i++){
			if (a % i == 0){
				printf("%dx", i);
				a /= i;
				break;
			}
		}
	}
	
	printf("%d", a);
	
	return 0;
}