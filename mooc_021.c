#include <stdio.h>

int main()
{
	int x = 0;
	int n = 0;
	
	scanf("%d", &x);
	
//	n++;
//	
//	x /= 10;
	
//	while (x > 0) {
//		n++;
//		x /= 10;
//	}
	do
	{
		x /= 10;
		n++;
	} while (x > 0);
	
	printf("%d\n", n);
	
	return 0;
}