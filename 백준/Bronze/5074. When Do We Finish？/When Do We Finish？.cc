#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    while (true)
    {
        string start, dur;
        cin >> start >> dur;

        if (start == "00:00" && dur == "00:00") break ;

        int startHour = stoi(start.substr(0, 2)),
            startMin = stoi(start.substr(3, 2)),
            durHour = stoi(dur.substr(0, 2)),
            durMin = stoi(dur.substr(3, 2));

        int endHour = startHour + durHour,
            endMin = startMin + durMin;

        int extraDay = 0;
        if (endMin >= 60)
        {
            endHour++;
            endMin -= 60;
        }
        if (endHour >= 24)
        {
            extraDay = endHour / 24;
            endHour %= 24;
        }

        cout << setw(2) << setfill('0') << endHour << ":";
        cout << setw(2) << setfill('0') << endMin;

        if (extraDay > 0) cout << " +" << extraDay;

        cout << "\n";
    }
}
