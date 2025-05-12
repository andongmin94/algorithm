#include <bits/stdc++.h>

using namespace std;

int arr[26];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    string s;
    cin.ignore();
    getline(cin, s);
    for (auto e : s)
        if (e >= 'a' && e <= 'z')
            arr[e - 'a']++;
    int max = 0;
    for (auto e : arr)
        if (max < e) max = e;
    cout << max;
}
