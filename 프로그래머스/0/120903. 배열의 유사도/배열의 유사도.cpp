#include <string>
#include <vector>

using namespace std;

int solution(vector<string> s1, vector<string> s2) {
    int answer = 0;
    //
    for (auto& e1 : s1)
    {
        for (auto& e2 : s2)
            if  (e1 == e2) answer++;
    }
    //
    return answer;
}