#include <bits/stdc++.h>

using namespace std;

int arr[1001] = {0,};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v, v2;
    while (n--)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }
    v2 = v;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size(); j++)
        {
            if (v2[i] == v[j])
            {
                cout << j + ++arr[j + 1] << ' ';
                break;
            }
        }
    }
}
