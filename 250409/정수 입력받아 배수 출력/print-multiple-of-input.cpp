#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, t; cin >> n;
    t = n;
    cout << n;
    for (int i = 0; i < 4; i++)
    {
        n += t;
        cout << ' ' << n;
    }

    return 0;
}