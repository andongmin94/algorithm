#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    //
    for (const auto& e : array)
    {
        string s = to_string(e);
        for (const auto& e_ : s)
            if (e_ == '7') answer++;
    }
    //
    return answer;
}