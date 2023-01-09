#include <stdio.h>
int main()
{
	int cnt, count, max, n, m, f, arr[101];
	
    scanf("%d", &cnt);
	for (int i = 0; i < cnt; i++)
    {	
		scanf("%d %d", &n, &m);
		for (int j = 0; j < n; j++) 
            scanf("%d", &arr[j]);
		f = 0;
        count = 1;
        while (1)
        {
            max = 0;
			for (int j = 0; j < n; j++)
				if (arr[j] > max) 
                    max = arr[j];
			while (arr[f] != max)
				f = (f + 1) % n;
			if (f == m)
                break;
			arr[f] = 0;
			count++;
		}
		printf("%d\n", count);
	}
	return 0;
}