using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    //
    answer++;
    for (int i = 1; i <= count; i++)
        answer += price * i;
    answer -= money;
    if (answer < 0) return 0;
    //
    return answer;
}