#include <stdio.h>

int main(void)
{
    long long k, n, max, min, mid, sum;
    
    scanf("%lld %lld", &k, &n);
    int arr[k];
    for (int i = 0; i < k; i++)
        scanf("%d", &arr[i]);
    max = 0;
    for (int i = 0; i < k; i++)
        if (max < arr[i])
            max = arr[i];
    min = 1;
    mid = (max + min) / 2;
    sum = 0;
    while (min <= max)
    {
        for (int i = 0; i < k; i++)
            sum += arr[i] / mid;
        if (sum >= n)
            min = mid + 1;
        else
            max = mid - 1;
        mid = (max + min) / 2;
        sum = 0;
    }
    printf("%lld\n", mid);
    return (0);
}