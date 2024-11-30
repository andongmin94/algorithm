#include <bits/stdc++.h>

using namespace std;

class Dot
{
public:
    int number;
    double distance;

    Dot(int number, int x, int y)
    {
        this->number = number;
        this->distance = abs(x) + abs(y);
    }
};

bool cmp(Dot a, Dot b)
{
    if (a.distance == b.distance) return a.number < b.number;
    return a.distance < b.distance;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<Dot> v;
    for (int i = 1; i <= n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back(Dot(i,x,y));
    }
    sort(v.begin(), v.end(), cmp);
    for (auto e : v)
        cout << e.number << '\n';
}
