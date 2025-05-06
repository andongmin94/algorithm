#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b; cin >> a >> b;
    while (a <= b)
    {
        if (a % 2) a *= 2;
        else a += 3;
        cout << a << ' ';
    }
    return 0;
}