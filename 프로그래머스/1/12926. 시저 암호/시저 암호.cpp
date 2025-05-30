#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    vector<int> v;

    // 문자열 -> ASCII 코드 벡터로 변환
    for (char num : s) {
        v.push_back((int)num);
    }

    // 시저 암호 변환
    for (int i = 0; i < s.size(); i++) {
        if (v[i] == 32) {  // 공백은 변환하지 않음
            v[i] = 32;
        } else if (v[i] <= 90) {  // 대문자 (A~Z)
            v[i] = v[i] + n;
            if (v[i] > 90) {
                v[i] = v[i] - 26;
            }
        } else if (v[i] >= 97) {  // 소문자 (a~z)
            v[i] = v[i] + n;
            if (v[i] > 122) {
                v[i] = v[i] - 26;
            }
        }
    }

    // ASCII 코드 -> 문자열 변환
    for (auto a : v) {
        answer += (char)a;
    }

    return answer;
}
