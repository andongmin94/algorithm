#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    string s;
    getline(cin, s);
    for (int i = s.length() - 1; i >= 0; i--)
        if (s[i] != ' ') cout << s[i];
    return 0;
}