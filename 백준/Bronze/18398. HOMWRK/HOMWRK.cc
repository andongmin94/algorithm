#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int N;
        cin >> N;
        for (int j = 0; j < N; j++)
        {
            int a, b;
            cin >> a >> b;
            cout << a + b << " " << a * b << '\n';
        }
    }
}