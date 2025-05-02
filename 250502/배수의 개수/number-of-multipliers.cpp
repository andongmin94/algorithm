#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 10, cnt = 0;
    while(n--)
    {
        int a; cin >> a;
        if (a % 3 == 0 || a % 5 == 0) cnt++;
    }
    cout << cnt;
    return 0;
}