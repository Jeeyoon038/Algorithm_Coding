#include <string>
#include <vector>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    int num=seoul.size();
    int cnt=0;
    for(int i=0;i<num;i++){
        if(seoul[i]=="Kim"){
            cnt=i;
        }
    }
    answer="김서방은 "+to_string(cnt)+"에 있다"; //문자열 덧셈으로 바꿔줘야 함.
    return answer;
}