#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    //
    if (n > m) swap(n, m);
    int max = 0;
    int min = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0 && m % i == 0) max = i;
    for (int i = 1; i <= n * m; i++)
        if ((max * i) % n == 0 && (max * i) % m == 0)
        {
            min = max * i;
            break;
        }
    answer.push_back(max);
    answer.push_back(min);
    //
    return answer;
}