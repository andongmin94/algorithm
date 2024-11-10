#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string s;
    char c;
    getline(cin, s);
    cin >> c;

    int cnt = 0;
    for (auto e : s)
        if (e == c) cnt++;
    cout << cnt;
    return 0;
}