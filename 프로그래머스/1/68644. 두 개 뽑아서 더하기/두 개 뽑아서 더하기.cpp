#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    int sum;

    for (int i = 0; i < numbers.size(); i++) {
        sum = 0;
        for (int j = i + 1; j < numbers.size(); j++) {
            sum = numbers[i] + numbers[j];
            answer.push_back(sum);
        }
    }

    // 중복 제거를 위해 unordered_set 사용
    unordered_set<int> s(answer.begin(), answer.end());

    // set에서 다시 vector로 변환
    answer = vector<int>(s.begin(), s.end());

    // 정렬
    sort(answer.begin(), answer.end());

    return answer;
}
