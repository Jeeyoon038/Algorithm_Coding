#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int num=s.size();
    int index=0;
    
    if(num%2==0){
        index=num/2-1;
        answer=s.substr(index,2); //substr(시작위치, 잘라낼 길이)
    }
    else
    {
        index=(num+1)/2-1;
        answer=s[index];
    }
    return answer;
}