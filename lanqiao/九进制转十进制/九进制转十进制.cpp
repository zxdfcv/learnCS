#include <cstdio>
#include <iostream>
#include <vector>

int main()
{
	int ninth;
	scanf("%d", &ninth);
	int num = 0;
	int x = ninth;
	int cnt = 1;
	while (x)
	{
		num = num + (x % 10) * cnt;
		cnt *= 9;
		x /= 10;
	}
	printf("%d\n", num);
	return 0;
}
