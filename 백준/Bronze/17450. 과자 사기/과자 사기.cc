#include <bits/stdc++.h>

using namespace std;

class Snack
{
public:
    string name;
    int price;
    int weight;
    double ratio;

    Snack(string s, int a, int b)
    {
        this->name = s;        
        this->price = a;
        this->weight = b;
        b *= 10;
        a *= 10;
        if (a >= 5000) a-= 500;
        ratio = (double)b / a;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a, b; cin >> a >> b;
    Snack s1 = Snack("S", a, b);
    cin >> a >> b;
    Snack s2 = Snack("N", a, b);
    cin >> a >> b;
    Snack s3 = Snack("U", a, b);
    double d = max({s1.ratio, s2.ratio, s3.ratio});
    if (s1.ratio == d) cout << s1.name;
    if (s2.ratio == d) cout << s2.name;
    if (s3.ratio == d) cout << s3.name;
}
