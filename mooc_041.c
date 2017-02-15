#include <stdio.h>

/*5.1章练习题_函数应用*/
void sum(int begin, int end)
{
	int i;
	int sum = 0;
	
	for (i = begin ; i <= end ; i++){
		sum += i;
	}
	
	printf("%d+%d的和是%d\n", begin, end, sum);
}


int main()
{	
	sum(10, 20);
	sum(20, 30);
	sum(45, 60);
	
	return 0;
}