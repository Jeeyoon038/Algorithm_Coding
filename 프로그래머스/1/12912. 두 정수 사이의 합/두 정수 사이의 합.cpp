#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    
    int high=max(a,b); //min max는 이미 c++의 표준 함수 이름이라 변수 이름으로 정하면 안됨.
    int low=min(a,b);
    
    if(low==high)
        answer=low;
    else{
        for(int i=low;i<=high;i++){
            answer=answer+i;
    }
    }
    
    return answer;
}