#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a, b; cin >> a >> b;
    if (!a && b >= 19) cout << "MAN";
    if (a && b >= 19) cout << "WOMAN";
    if (!a && b < 19) cout << "BOY";
    if (a && b < 19) cout << "GIRL";
    return 0;
}