#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) {
    int answer = 0;
    answer = (12000 * n) + (2000 * k) - ((n / 10) * 2000);
    return answer;
}