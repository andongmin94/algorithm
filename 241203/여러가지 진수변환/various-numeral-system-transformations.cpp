#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, b;
    cin >> n >> b;
    int arr[20] = {};
    int idx = 0;
    while(n > b)
    {
        arr[idx++] = n % b;
        n /= b;
    }
    arr[idx] = n;

    for (int i = idx; i >= 0; i--)
        cout << arr[i];
    
    return 0;
}