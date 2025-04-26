#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        double cm, kg, bmi;
        cin >> cm >> kg;
        bmi = kg / pow(cm / 100, 2);

        if (cm < 140.1) cout << 6 << '\n';
        else if (cm >= 140.1 && cm < 146) cout << 5 << '\n';
        else if (cm >= 146 && cm < 159) cout << 4 << '\n';
        else if (cm >= 159 && cm < 161)
        {
            if (bmi >= 16 && bmi < 35) cout << 3;
            else cout << 4;
            cout << '\n';
        }
        else if (cm >= 161 && cm < 204)
        {
            if (bmi >= 20 && bmi < 25) cout << 1;
            else if ((bmi >= 18.5 && bmi < 20) || (bmi >= 25 && bmi < 30)) cout << 2;
            else if ((bmi >= 16 && bmi < 18.5) || (bmi >= 30 && bmi < 35)) cout << 3;
            else cout << 4;
            cout << '\n';
        }
        else cout << 4 << '\n';
    }
}
