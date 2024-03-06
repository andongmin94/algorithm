#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    list<int> v;
    for (int i = 0; i < n; i++)
        v.push_back(i + 1);

    list<int>::iterator v2 = v.begin();
    cout << "<";

    while(v.size())
    {
        for (int i = 0; i < k - 1; i++)
        {
            if (v2 == v.end()) v2 = v.begin();
            v2++;
            if (v2 == v.end()) v2 = v.begin();
        }
        cout << *v2;
        v2 = v.erase(v2);
        if(v.size()) cout << ", ";
    }
    cout << ">";
}
