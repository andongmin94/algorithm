#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 10, cnt = 0, cnt2 = 0;
    while(n--)
    {
        int a; cin >> a;
        if (a % 3 == 0) cnt++;
        if (a % 5 == 0) cnt2++;
    }
    cout << cnt << ' ' << cnt2;
    return 0;
}