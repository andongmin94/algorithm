#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<string,double> m;
    m.insert(pair<string,double>("Paper",57.99));
    m.insert(pair<string,double>("Printer",120.50));
    m.insert(pair<string,double>("Planners",31.25));
    m.insert(pair<string,double>("Binders",22.50));
    m.insert(pair<string,double>("Calendar",10.95));
    m.insert(pair<string,double>("Notebooks",11.20));
    m.insert(pair<string,double>("Ink",66.95));

    double sum = 0;
    while(true)
    {
        string s;
        cin >> s;
        if (s == "EOI") break;

        sum += m[s];
    }

    cout << fixed << setprecision(2) << '$' << sum;
}
