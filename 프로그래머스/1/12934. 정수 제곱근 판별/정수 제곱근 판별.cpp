#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    
    long long x=sqrt(n); //x는 n의 제곱근, 소수점 이하 버림
    
    if(x*x==n)
        answer=(x+1)*(x+1);
    else
        answer=-1;
    
    return answer;
}