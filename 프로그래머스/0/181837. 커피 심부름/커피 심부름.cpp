#include <string>
#include <vector>

using namespace std;

int solution(vector<string> order) {
    int answer = 0;
    //
    for (const auto& e : order)
    {
        if (e == "americano" || e == "iceamericano" || e == "americanoice" || e == "hotamericano" || e == "americanohot") answer += 4500;

        if (e == "cafelatte" || e == "icecafelatte" || e == "cafelatteice" || e == "hotcafelatte" || e == "cafelattehot" ) answer += 5000;

        if (e == "anything") answer += 4500;
    }
    //
    return answer;
}