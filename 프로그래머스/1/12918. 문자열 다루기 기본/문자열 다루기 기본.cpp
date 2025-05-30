#include <string>
using namespace std;

bool solution(string s) {
    if (s.size() != 4 && s.size() != 6) {
        return false;
    }

    for (char c : s) { //string을 문자 단위로 끊을 때!!
        if (c < '0' || c > '9') {
            return false;
        }
    }
    return true;
}
