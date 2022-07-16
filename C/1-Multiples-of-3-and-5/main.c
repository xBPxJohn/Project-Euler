#include <stdio.h>

int main()
{
	int num = 0;

	for(int i = 0; i < 1000; i++)
	{
		if(i % 3 == 0 || i % 5 == 0)
		{
			num = num += i;
		}
	}
	printf("%d", num);

	return 0;
}
