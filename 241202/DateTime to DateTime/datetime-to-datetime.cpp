#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b, c;
    cin >> a >> b >> c;
    int eleven = 10 * 24 * 60 + 11 * 60 + 11;
    int sum = (a - 1) * 24 * 60 + b * 60 + c;
    if (sum - eleven >= 0) cout << sum - eleven;
    else cout << -1;
    return 0;
}