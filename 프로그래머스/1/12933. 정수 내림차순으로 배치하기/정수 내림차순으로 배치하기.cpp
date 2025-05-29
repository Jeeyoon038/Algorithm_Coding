#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    stringstream ss(to_string(n)); //stringstream은 string이나 char배열을 받아서 동작
    
    char num;
    vector <int> v;
                    
    while(ss>>num){
        v.push_back(num-'0'); //문자를 숫자로 변환
    }
                    
    sort(v.begin(),v.end(),greater<int>());
    
    for(int a:v){
        answer=answer*10+a;
    }
    return answer;
}