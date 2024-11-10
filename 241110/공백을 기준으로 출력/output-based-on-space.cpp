#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a, b,;
    getline(cin, a);
    getline(cin, b);

    for (auto e : a)
        if (e != ' ') cout << e;
    for (auto e : b)
        if (e != ' ') cout << e;
    return 0;
}