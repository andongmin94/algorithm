#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n = 4;
    while (n--)
    {
        int a;
        int sum = 0;
        cin >> a;
        sum += a;cin >> a;
        sum += a;cin >> a;
        sum += a;cin >> a;
        sum += a;cout << sum << '\n';
    }
    return 0;
}