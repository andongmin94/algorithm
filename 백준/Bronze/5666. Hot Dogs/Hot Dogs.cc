#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, b;

    while(true){
        cin >> a >> b;

        if(cin.eof() == true) break;
        cout << fixed << setprecision(2);
        cout << a / b << '\n';
    }
}
