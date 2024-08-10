#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = 0;
    //
    string s = to_string(num);
    string k_ = to_string(k);
    bool check = true;
    for (const auto& e : s)
    {
        answer++;
        if (e == k_[0])
        {
            check = false;
            break;   
        }
    }
    if (check) answer = -1;
    //
    return answer;
}