#include <bits/stdc++.h>

using namespace std;

class Human
{
public:
    string name;
    int height;
    double weight;

    Human(string name, int height, double weight)
    {
        this->name = name;
        this->height = height;
        this->weight = weight;
    }
};

bool cmp_name(Human a, Human b)
{
    return a.name < b.name;
}

bool cmp_height(Human a, Human b)
{
    return a.height > b.height;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 5;

    vector<Human> v;
    while (n--)
    {
        string name;
        int height;
        double weight;
        cin >> name >> height >> weight;
        v.push_back(Human(name, height,weight));
    }

    sort(v.begin(), v.end(), cmp_name);
    cout << "name\n";
    for (auto e : v)
        cout << e.name << ' ' << e.height << ' ' << fixed << setprecision(1) << e.weight << '\n';

    sort(v.begin(), v.end(), cmp_height);
    cout << "\nheight\n";
    for (auto e : v)
        cout << e.name << ' ' << e.height << ' ' << fixed << setprecision(1) << e.weight << '\n';
}
