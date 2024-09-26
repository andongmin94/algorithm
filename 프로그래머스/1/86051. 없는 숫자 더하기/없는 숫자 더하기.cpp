#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = -1;
    //
    answer++;
    int arr[10] = {0,};
    for(auto e : numbers) arr[e]++;
    for (int i = 0; i < 10; i++)
        if (!arr[i]) answer += i;
    //
    return answer;
}