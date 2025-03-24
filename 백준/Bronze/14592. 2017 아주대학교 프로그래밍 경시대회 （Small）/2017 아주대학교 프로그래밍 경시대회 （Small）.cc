#include <bits/stdc++.h>

using namespace std;

class Human
{
public:
    int s, c, l, number;

    Human(int s, int c, int l, int number)
    {
        this->s = s;
        this->c = c;
        this->l = l;
        this->number = number;
    }
};

bool cmp(Human a, Human b)
{
    if (a.s == b.s)
    {
        if (a.c == b.c) return a.l < b.l;
        return a.c < b.c;
    }
    return a.s > b.s;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;

    vector<Human> v;
    for (int i = 1; i <= n; i++)
    {
        int s, c, l;
        cin >> s >> c >> l;

        v.push_back(Human(s, c, l, i));
    }
    sort(v.begin(), v.end(), cmp);

    cout << v[0].number;
}

