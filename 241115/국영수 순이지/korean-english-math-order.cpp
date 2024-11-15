#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string name;
    int kor, eng, mat;

    Student(string name, int kor, int eng, int mat)
    {
        this->name = name;
        this->kor = kor;
        this->eng = eng;
        this->mat = mat;
    };
};

bool cmp(Student a, Student b)
{
    if (a.kor == b.kor)
    {
        if (a.eng == b.eng)
            return a.mat > b.mat;
        return a.eng > b.eng;
    }
    return a.kor > b.kor;
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
        int b, c, d;
        cin >> a >> b >> c >> d;
        v.push_back(Student(a,b,c,d));
    }
    sort(v.begin(), v.end(), cmp);
    for (auto e : v)
        cout << e.name << ' ' << e.kor << ' ' << e.eng << ' ' << e.mat << '\n';
}