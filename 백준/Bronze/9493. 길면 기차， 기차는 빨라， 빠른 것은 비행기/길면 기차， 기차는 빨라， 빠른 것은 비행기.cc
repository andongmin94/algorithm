#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        double m, a, b;
        cin >> m >> a >> b;
        if (!m && !a && !b) break;
        
        double time_diff_hours = (m / a) - (m / b);

        long long total_seconds = round(time_diff_hours * 3600);

        long long hours = total_seconds / 3600;
        long long minutes = (total_seconds % 3600) / 60;
        long long seconds = total_seconds % 60;
        
        cout << hours << ":" 
             << setfill('0') << setw(2) << minutes << ":" 
             << setfill('0') << setw(2) << seconds << '\n';
    }
}
