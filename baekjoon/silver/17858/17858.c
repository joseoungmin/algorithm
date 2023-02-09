#include <stdio.h>

long long	x[200000];

int main(void)
{
	long long	n, m, a, c, result = 0, lo, mid, hi;

	scanf("%lld %lld %lld %lld %lld", &n, &m, &a, &c, &x[0]);
	for (int i = 1; i <= n; i++)
		x[i] = (x[i - 1] * a + c) % m;
	for (int i = 1; i <= n; i++)
	{
		lo = 1;
		hi = n;
		while (lo <= hi)
		{
			mid = (lo + hi) >> 1;
			if (x[mid] == x[i])
			{
				result++;
				break ;
			}
			else if (x[mid] < x[i])
				lo = mid + 1;
			else 
				hi = mid - 1;
		}
	}
	printf("%lld\n", result);
	return (0);
}
