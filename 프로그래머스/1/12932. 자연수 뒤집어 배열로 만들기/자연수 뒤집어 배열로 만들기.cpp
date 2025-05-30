#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    
    if(n<=9)
        answer.push_back(n);
    
    while (n>=10){
        int num;
        num=n%10;
        answer.push_back(num);
        n=n/10;
        if(n<=9)
            answer.push_back(n);
    }
    
    return answer;
}