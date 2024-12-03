#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, a_life;
    int b, b_life;
    cin >> a >> a_life >> b >> b_life;
    while(true)
    {
        if (a_life <= 0 || b_life <= 0) break;
        a_life -= b;
        b_life -= a;
    }
    if (a_life <= 0 && b_life <= 0) cout << "DRAW";
    else if (a_life <= 0) cout << "PLAYER B";
    else if (b_life <= 0) cout << "PLAYER A";
}