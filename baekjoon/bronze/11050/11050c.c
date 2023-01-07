#include<stdio.h>

int main(void){
    int n, k;
    int result = 1;

    scanf("%d %d", &n, &k);
    for(int i = 0; i < k; i++){
        result *= n - i;
        result /= i + 1;
    }
    printf("%d\n", result);
    return 0;
}