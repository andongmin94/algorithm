#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int p_h, p_m, p_s;
    char t,t2,t3,t4;
    int c_h, c_m, c_s;
    cin >> p_h >> t >> p_m >> t2 >> p_s >> c_h >> t3 >> c_m >> t4 >> c_s;

    int a = p_h * 3600 + p_m * 60 + p_s;
    int b = c_h * 3600 + c_m * 60 + c_s;

    int sum = (a > b) ? (b + 86400 - a) : (b - a);
    
    string h = sum / 3600 < 10 ? "0" + to_string(sum / 3600) : to_string(sum / 3600);
    string m = sum % 3600 / 60 < 10 ? "0" + to_string(sum % 3600 / 60) : to_string(sum % 3600 / 60);
    string s = sum % 3600 % 60 < 10 ? "0" + to_string(sum % 60) : to_string(sum % 60);

    if (sum == 0) {
        cout << "24:00:00";
    } else {
        cout << h << ':' << m << ':' << s;
    }
}
 