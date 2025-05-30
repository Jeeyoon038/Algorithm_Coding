#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    int num=0;
    string word="수박";
    if(n%2==0){
        num=n/2;
        for(int i=0;i<num;i++){
            answer=answer+word;
        }
        
    }
    else{
        num=n/2;
        for(int i=0;i<num;i++){
            answer=answer+word;
        }
        answer=answer+"수";
    }
    return answer;
}