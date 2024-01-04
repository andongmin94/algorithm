#include <bits/stdc++.h>

using namespace std;

struct human
{
	int age;
	string name;
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);


	int N;
	cin >> N;
	vector<human> a;
	for (int i = 0; i < N; i++)
	{
		human unknown;
		cin >> unknown.age >> unknown.name;
		a.push_back(unknown);
	}

	for (int i = 1; i < 201; i++)
		for (auto e : a)
			if (i == e.age)
				cout << e.age << " " << e.name << '\n';
}
