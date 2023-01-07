#include <iostream>

using namespace std;

int main(void){
    int N, K;
    int arr[1001] = {0, };

    cin >> N >> K;
    for(int i = 0; i < N; i++)
        arr[i] = i + 1;
    int idx = 0;
    cout << "<";
    for(int i = 0; i < N; i++){
        for(int j = 0; j < K; j++){
            if(arr[idx] == 0){
                idx++;
                j--;
            }
            else if(j == K - 1){
                if(i == N - 1)
                    cout << arr[idx];
                else
                    cout << arr[idx] << ", ";
                arr[idx] = 0;
            }
            else  
                idx++;
            if(idx == N)
                idx = 0;
        }
    }
    cout << ">" << endl;
    return (0);
}