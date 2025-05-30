#include <string>
#include <vector>
#include <sstream>
using namespace std;

string solution(string phone_number) {
    string answer = "";
    vector <char> v;
    stringstream ss(phone_number);
    char a;
    while(ss>>a){
        v.push_back(a);
    }
    int num=v.size();
    
    for(int i=0;i<(num-4);i++){
        v[i]='*'; //v는 char 타입의 벡터인데, "*"는  const char*(문자열)타입이라서 대입할 수 없다. 반드시작은 따옴표를 써야 함. 
        //문자 하나 char : 작은 따옴표
    }
    
    for(auto a:v){
        answer=answer+a;
    }
    return answer;
}