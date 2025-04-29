#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int t = 8;
    int a, b; cin >> a >> b;
    cout << a << ' ' << b << ' ';
    while(t--)
    {
        int temp = (a + b) % 10;
        cout << temp  << ' ';
        a = b;
        b = temp;
    }
    return 0;
}