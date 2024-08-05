#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int k) {
    vector<int> answer;
    //
    int origin = k;
    while(k <= n)
    {
        answer.push_back(k);
        k += origin;
    }
    //
    return answer;
}