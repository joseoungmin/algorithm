#include <stdio.h>

void	print_reverse(char stack[21], int *back, char c)
{
	while (--(*back) >= 0)
		printf("%c", stack[*back]);
	printf(" ");
	*back = 0;
}

int main(void)
{
	char	stack[21] = {0,};
	char	str[1001] = {0,};
	int		num, idx, back;

	scanf("%d", &num);
	while (num--)
	{
		scanf("\n%[^\n]s", str);
		back = 0;
		idx = 0;
		while (str[idx] != '\0')
		{
			if (str[idx] == ' ' || str[idx] == '\n')
				print_reverse(stack, &back, idx);
			else
				stack[back++] = str[idx];
			idx++;
		}
		print_reverse(stack, &back, idx);
	}
	return (0);
}
