#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;
    //
    if (my_string[0] == is_prefix[0])
    {
        bool check = true;
        for (int i = 0; i < is_prefix.length(); i++)
            if (my_string[i] != is_prefix[i]) check = false;
        if (check) answer++;
    }
    //
    return answer;
}