#include <bits/stdc++.h>

using namespace std;

class Human
{
public:
    string name;
    int height, weight;

    Human(string name, int height, int weight)
    {
        this->name = name;
        this->height = height;
        this->weight = weight;
    }
};

bool cmp(Human a, Human b)
{
    if (a.height == b.height) return a.weight > b.weight;
    return a.height < b.height;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<Human> v;
    while (n--)
    {
        string s;
        int a, b;
        cin >> s >> a >> b;
        v.push_back(Human(s,a,b));
    }
    sort(v.begin(), v.end(), cmp);
    for (auto e : v)
        cout << e.name << ' ' << e.height << ' ' << e.weight << '\n';
}
