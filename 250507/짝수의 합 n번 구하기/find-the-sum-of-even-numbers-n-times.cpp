#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int t; cin >> t;
    while(t--)
    {
        int a, b; cin >> a >> b;
        int sum = 0;
        for (int i = a; i <= b; i++)
            if (i % 2 == 0) sum += i;
        cout << sum << '\n';
    }
    return 0;
}