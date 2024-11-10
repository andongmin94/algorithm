#include <iostream>
using namespace std;

void func(int& a, int& b)
{
    if (a > b) swap(a, b);
    a += 10;
    b *= 2;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int a, b;
    cin >> a >> b;

    func(a, b);
    cout << a << ' ' << b;
    return 0;
}