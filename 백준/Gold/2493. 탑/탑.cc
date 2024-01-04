#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int* arr = new int [500001] {100000000, };
    stack<int> idx;

    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> arr[i];
        while (!(idx.empty()) && arr[idx.top()] < arr[i])
            idx.pop();

        if (!(idx.empty()))
            cout << idx.top() << " ";
        else cout << 0 << " ";
        
        idx.push(i);
    }

    delete[] arr;
}
