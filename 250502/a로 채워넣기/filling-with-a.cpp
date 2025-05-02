#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s; cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (i == 1 || i == s.length() - 2) cout << 'a';
        else cout << s[i];
    }
    return 0;
}