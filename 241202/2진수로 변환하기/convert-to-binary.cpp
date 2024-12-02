#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    int cnt = 0;
    int digit[100] = {};
    while(true)
    {
        if (n < 2) digit[cnt] = n;
        if (n < 2) break;

        digit[cnt++] = n % 2;
        n /= 2;
    }
    for (int i = cnt; i >= 0; i--)
        cout << digit[i];
    return 0;
}