#include<stdio.h>
int main()
{
	int x = 1;
	while (x++ < 5)
	{
		if (x % 2 == 0)
		{
			x += 2;
		}
	}
}