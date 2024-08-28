#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = -1;
    //
    answer++;
    
    int coupon = 0;
    while(chicken > 0)
    {
        coupon += chicken;
        answer += coupon / 10;
        chicken = coupon / 10;
        coupon %= 10;
    }
    //
    return answer;
}