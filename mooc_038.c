#include <stdio.h>

int main()
{
	
	int n;
	int m;
	int x;
	int sum = 0;
	int a = 0;
	
	scanf("%d %d", &n, &m);
	
	for (x = 2; a < m; x++){
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
			if (a >= n){
				sum += x;
			}
		}
		
	}
	
	printf("%d", sum);

	return 0;
}