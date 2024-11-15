#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int height;
    int age;

    Student(string _name, int _height, int _age)
    {
        name = _name;
        height = _height;
        age = _age;
    };
};

bool cmp(Student a, Student b)
{
    return a.height < b.height;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    vector<Student> v;
    while(n--)
    {
        string a;
        int b;
        int c;
        cin >> a >> b >> c;
        v.push_back(Student(a,b,c));
    }
    sort(v.begin(), v.end(), cmp);
    for (auto e : v)
        cout << e.name << ' ' << e.height << ' ' << e.age << '\n';
}