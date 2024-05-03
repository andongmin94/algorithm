#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    double liquid = 0;
    
    while(n--)
    {
        double a;
        cin >> a;
        liquid += pow(a,3);        
    }

    cout << fixed;
    cout << setprecision(10);
    cout << cbrt(liquid);
}
