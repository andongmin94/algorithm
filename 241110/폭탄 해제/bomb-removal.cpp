#include <bits/stdc++.h>

using namespace std;

class Bomb
{
public:
    string code;
    char color;
    int second;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    Bomb* a = new Bomb();

    cin >> a->code >> a->color >> a->second;

    cout << "code : " << a->code << "\ncolor : " << a->color << "\nsecond : " << a->second;

    delete a;
}