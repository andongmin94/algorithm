#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    int height, weight, number;

    Student(int height, int weight, int number)
    {
        this->height = height;
        this->weight = weight;
        this->number = number;
    }
};

bool cmp(Student a, Student b)
{
    if (a.height == b.height)
    {
        if (a.weight == b.weight) return a.number < b.number;
        return a.weight > b.weight;
    }
    return a.height > b.height;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<Student> v;

    for (int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back(Student(a, b, i));
    }
    sort(v.begin(), v.end(), cmp);
    for (auto e : v)
        cout << e.height << ' ' << e.weight << ' ' << e.number << '\n';
}
