#include <stdio.h>

int main()
{
	int sum = 0;
	int i;
	
	for (i = 0;i < 10; i++){
		if (i % 2)continue;
		sum += i;
	}
	
	printf("%d\n", sum);
	return 0;
}