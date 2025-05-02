#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n, cnt = 0, sum = 0; cin >> n;
    while(sum < n)
    {
        sum += ++cnt;
    }
    cout << cnt;
    return 0;
}