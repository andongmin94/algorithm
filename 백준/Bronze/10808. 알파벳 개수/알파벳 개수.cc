#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> a(26, 0);
    string b;
    cin >> b;
    for(char e : b)
        a[static_cast<int>(e - 'a')]++;
    for(int e : a)
        cout << e << " ";
}
