#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        double sum = 0;

        while(n--)
        {
            string s;
            cin >> s;
            int i;
            cin >> i;
            double d;
            cin >> d;

            sum += i * d;
        }

        cout << fixed << setprecision(2) << "$" << sum << '\n';
    }
}