#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int number, height, weight;

    Student(int number, int height, int weight)
    {
        this->number = number;
        this->height = height;
        this->weight = weight;
    }
};

bool cmp(Student a, Student b)
{
    if (a.height == b.height) return a.weight > b.weight;
    return a.height < b.height;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    vector<Student> v;
    for (int i = 1; i <= n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v.push_back(Student(a, b, c));
    }
    sort(v.begin(), v.end(), cmp);
    for (auto e : v)
        cout << e.height << ' ' << e.weight << ' ' << e.number << '\n';

    return 0;
}