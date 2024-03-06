#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int a = n / 5;
        int b = n % 5;
        while(a--) cout << "++++ ";
        while(b--) cout << '|';

        cout << '\n';
    }
}