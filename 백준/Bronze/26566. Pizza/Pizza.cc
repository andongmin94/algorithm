#include <bits/stdc++.h>

#define PI 3.14159265358979

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while(n--)
    {
        int a1, p1, r1, p2;
        cin >> a1 >> p1 >> r1 >> p2;

        double piece = static_cast<double>(a1) / p1;
        double round = static_cast<double>(PI * pow(r1, 2)) / p2;

        if (piece > round) cout << "Slice of pizza\n";
        else cout << "Whole pizza\n";
    }
}
