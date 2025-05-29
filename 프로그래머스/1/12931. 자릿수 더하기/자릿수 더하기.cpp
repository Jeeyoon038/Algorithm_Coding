#include <iostream>

using namespace std;
int solution(int n)
{
    int answer=0;
    
    if(n<=9)
        answer=n;
    
    while(n>=10){
        answer=answer+n%10;
        n=n/10;
        if(n<=9)
            answer=answer+n;
    }

    return answer;
}