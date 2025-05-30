#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    vector <int> v;
    
    while(n>0){
        v.push_back(n%3); //3진법 나머지 저장(뒤집힌 순서로 들어감)
        n=n/3;
    }
    
    
    for(int i=0;i<v.size();i++){ //여기 진법 바꾸는 방법 알아둘 것!
        answer=answer*3+v[i];
    }
    return answer;
}