#include <stdio.h>
#include <string.h>

typedef struct s_deque t_deque;

struct s_deque
{
	int	(*fp[8])(t_deque *, char *);
	int	deq[10000];
	int	size;
	int	front;
	int	back;
};

int	push_front(t_deque *deque, char *str)
{
	int	num;

	scanf("%d", &num);
	deque->deq[deque->front--] = num;
	if (deque->front == -1)
		deque->front = 9999;
	deque->size++;
	return (0);
}

int push_back(t_deque *deque, char *str)
{
	int	num;

	scanf("%d", &num);
	deque->deq[deque->back++] = num;
	if (deque->back == 10000)
		deque->back = 0;
	deque->size++;
	return (0);
}

int pop_front(t_deque *deque, char *str)
{
	if (deque->size == 0)
		return (printf("-1\n"));
	if (++deque->front == 10000)
		deque->front = 0;
	printf("%d\n", deque->deq[deque->front]);
	deque->size--;
	return (0);
}

int pop_back(t_deque *deque, char *str)
{
	if (deque->size == 0)
		return (printf("-1\n"));
	if (--deque->back == -1)
		deque->back = 9999;
	printf("%d\n", deque->deq[deque->back]);
	deque->size--;
	return (0);
}

int ft_size(t_deque *deque, char *str)
{
	return (printf("%d\n", deque->size));
}

int ft_empty(t_deque *deque, char *str)
{
	return (printf("%d\n", (deque->size == 0)));
}

int ft_front(t_deque *deque, char *str)
{
	if (deque->size == 0)
		return (printf("-1\n"));
	if (deque->front + 1 == 10000)
		return (printf("%d\n", deque->deq[0]));
	else
		return (printf("%d\n", deque->deq[deque->front + 1]));
}

int ft_back(t_deque *deque, char *str)
{
	if (deque->size == 0)
		return (printf("-1\n"));
	if (deque->back - 1 == -1)
		return (printf("%d\n", deque->deq[9999]));
	else
		return (printf("%d\n", deque->deq[deque->back - 1]));
}

void	init_func_pointer(t_deque *deque)
{
	deque->size = 0;
	deque->front = 9999;
	deque->back = 0;
	deque->fp[0] = push_front;
	deque->fp[1] = push_back;
	deque->fp[2] = pop_front;
	deque->fp[3] = pop_back;
	deque->fp[4] = ft_size;
	deque->fp[5] = ft_empty;
	deque->fp[6] = ft_front;
	deque->fp[7] = ft_back;
}

int check_command(t_deque *deque)
{
	int			idx = 0;
	char		str[11];
	const char	command[8][11] = {
		"push_front", "push_back",
		"pop_front", "pop_back",
		"size", "empty",
		"front", "back"};

	scanf("%s", str);
	while (idx < 8 && (strncmp(command[idx], str, strlen(command[idx])) != 0))
		idx++;
	return (deque->fp[idx](deque, str));
}

int main(void)
{
	t_deque	deque;
	int		count;

	init_func_pointer(&deque);
	scanf("%d", &count);
	while (count--)
		check_command(&deque);
	return (0);
}
