#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) {
    int answer = 0;
    //
    for (int i = my_string.length() - 1; i >= 0; i--)
    {
        if (my_string[i] == is_suffix[0])
        {
            bool check = true;
            for (int j = 0; j < is_suffix.length(); j++)
                if (my_string[i + j] != is_suffix[j]) check = false;
            if (check && my_string.length() - i == is_suffix.length()) answer++;
        }
    }
    //
    return answer;
}