#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    //
    string odd = "";
    string even = "";
    
    for (auto& e : num_list)
    {
        if (e % 2) odd += to_string(e);
        else even += to_string(e);
    }
    answer += stoi(odd) + stoi(even);
    //
    return answer;
}