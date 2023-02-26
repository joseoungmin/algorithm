#include <stdio.h>

int main()
{
	int n, m, j = 0;
	int arr[5000];

	scanf("%d %d",&n, &m);
	for(int i = 0; i < n; i++)
		arr[i] = i + 1;
	printf("<");
	while(n)
	{
		j = (j + m - 1) % n;
		printf("%d",arr[j]);
		for(int i = j; i < n-1; i++)
			arr[i] = arr[i + 1];
		if(n != 1)
			printf(", ");
		n--;
	}
	printf(">\n");
	return 0;
}
