#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    //
    vector<int> v(n, 0);
    for (auto e : section)
        v[e-1] = -1;
    for (int i = 0; i < n; i++)
    {
        if (v[i] == -1)
        {
            for (int j = i; j < i + m && j < n; j++)
            {
                v[j]++;
            }
            answer++;
        }
    }
    //
    return answer;
}