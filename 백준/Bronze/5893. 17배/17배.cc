#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a;
    cin >> a;

    string b = a;
    int carry = 0;
    
    for (int i = a.size() - 1; i >= 0; --i)
    {
        int bit = a[i] - '0';
        int product = bit * 17 + carry;
        b[i] = (product % 2) + '0';
        carry = product / 2;
    }

    while (carry > 0)
    {
        b.insert(b.begin(), (carry % 2) + '0');
        carry /= 2;
    }
    
    b.erase(0, b.find_first_not_of('0'));

    cout << b;
}