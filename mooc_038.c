#include <stdio.h>

int main()
{
	
	int n;
	int m;
	int x;
	int sum;
	int a = 0;
	
	scanf("%d %d", &n, &m);
	
	for (x = 2; x <= 200; x++){
		int i;
		int isPrime = 1;
		
		for (i = 2; i < x; i++){
			if (x % i == 0){
				isPrime = 0;
				break;
			}
		}
		
		if (isPrime == 1){
			a += 1;
			if (a <= m){
				sum += x;
			}
		}
		
	}
	
	printf("%d", sum);

	return 0;
}