#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    //
    for (int i_ = i; i_ <= j; i_++)
    {
        string s = to_string(i_);

        for (const auto& e : s)
            if (e == to_string(k)[0]) answer++;
    }
    //
    return answer;
}