#include <iostream>
using namespace std;

int main() {
    // Please write your code here.

    int n, cnt = 1; cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
            cout << cnt++ << ' ';
        cout << '\n';
    }
    return 0;
}