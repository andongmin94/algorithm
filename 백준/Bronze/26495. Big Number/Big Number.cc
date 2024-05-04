#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0') cout << "0000\n0  0\n0  0\n0  0\n0000";
        
        if (s[i] == '1') cout << "   1\n   1\n   1\n   1\n   1";

        if (s[i] == '2') cout << "2222\n   2\n2222\n2\n2222";

        if (s[i] == '3') cout << "3333\n   3\n3333\n   3\n3333";

        if (s[i] == '4') cout << "4  4\n4  4\n4444\n   4\n   4";

        if (s[i] == '5') cout << "5555\n5\n5555\n   5\n5555";

        if (s[i] == '6') cout << "6666\n6\n6666\n6  6\n6666";

        if (s[i] == '7') cout << "7777\n   7\n   7\n   7\n   7";

        if (s[i] == '8') cout << "8888\n8  8\n8888\n8  8\n8888";

        if (s[i] == '9') cout << "9999\n9  9\n9999\n   9\n   9";

        if (i != s.length() - 1) cout << "\n\n";
    }
}
