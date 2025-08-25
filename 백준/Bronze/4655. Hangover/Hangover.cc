#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        double d; cin >> d;
        if (!d) break;

        int cnt = 0;
        double sum = 0;
        while (sum < d)
        {
            cnt++;
            sum += 1 / (double)(cnt + 1);
        }
        
        cout << cnt << " card(s)\n";
    }
}
