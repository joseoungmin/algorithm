#include <stdio.h>

int	add(int a, int b){return (a + b);}
int	sub(int a, int b){return (a - b);}
int	mod(int a, int b){return (a / b);}
int	mul(int a, int b){return (a * b);}

int main(void)
{
	int	a, b, c, num, res, min = 1 << 30;
	int	(*fp[4])(int, int);
	fp[0] = add;
	fp[1] = sub;
	fp[2] = mod;
	fp[3] = mul;

	scanf("%d %d %d", &a, &b, &c);
	for (int i = 0; i < 4; i++)
	{
		if (i == 2 && a % b != 0)
			continue ;
		num = fp[i](a, b);
		for (int j = 0; j < 4; j++)
		{
			if (j == 2 && num % c != 0)
				continue ;
			res =  fp[j](num, c);
			if (res >= 0 && min > res)
				min = res;
		}
	}
	printf("%d\n", min);
	return (0);
}
