#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n; cin >> n;
    if (n % 13 == 0 || n % 19 == 0) cout << "True";
    else cout << "False";
    return 0;
}