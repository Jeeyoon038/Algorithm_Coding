#include <string>
#include <vector>
#include <cctype> //toupper() tolower() 사용하려면 선언해야함

using namespace std;

string solution(string s) {
    string answer = "";
    int index=0; //단어 내 인덱스
    
    for(char c:s){
        if(c==' '){
            answer+=' ';
            index=0; //단어 인덱스 초기화
        }
        else{
            if(index%2==0){
                answer+=toupper(c);
                //answer=answer+toupper(c); 이렇게 하면 string+char 연산이 된다.
                //+=연산은 string과 char에 잘 동작한다.
            }
            else{
                answer+=tolower(c);
            }
            index++;
        }
    }
    return answer;
}