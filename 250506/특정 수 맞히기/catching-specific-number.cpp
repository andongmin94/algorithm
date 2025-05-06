#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    while(true)
    {
        int n; cin >> n;
        if (n < 25) cout << "Higher\n";
        if (n > 25) cout << "Lower\n";
        if (n == 25) break;
    }
    cout << "Good";
    return 0;
}