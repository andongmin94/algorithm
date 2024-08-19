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
        int n, cnt = 0;
        double sum = 0;
        cin >> n;
        while(n--)
        {
            int a;
            string s;
            double b;
            cin >> a >> s;
            b = stod(s);
            cnt += a;
            sum += a * b;
        }
        cout << cnt << ' ' << fixed << setprecision(1) << sum / cnt << '\n';
    }
}
