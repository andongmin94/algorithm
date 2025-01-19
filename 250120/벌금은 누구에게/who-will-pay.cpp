#include <iostream>

using namespace std;

int N, M, K;
int student[10000];

int main() {
    cin >> N >> M >> K;
    int a;

    for (int i = 0; i < M; i++) {
        cin >> a;
        student[a]++;
        if (student[a] >= K) break;
    }

    if (student[a] >= K) cout << a;
    else cout << -1;

    return 0;
}