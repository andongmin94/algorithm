#include <bits/stdc++.h>

using namespace std;

class Student
{
    public:
    string id;
    int lv;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Student a = Student();
    cin >> a.id >> a.lv;
    cout << "user codetree lv 10\n";
    cout << "user " << a.id << " lv " << a.lv;
}