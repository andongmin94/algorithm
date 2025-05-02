#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, cnt = 0; cin >> n;
    for (int i = 1; i <= n; i++)
        if (i % 2 || i % 3 || i % 5) cnt++;
    cout << cnt;
    return 0;
}