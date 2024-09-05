#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while(n--)
    {
        int arr[26] = {0,};
        string s;
        cin >> s;

        for (const auto& e : s)
            arr[e - 'A']++;

        int sum = 0;
        for (int i = 0; i < 26; i++)
            if (!arr[i]) sum += i + 'A';

        cout << sum << '\n';
    }
}