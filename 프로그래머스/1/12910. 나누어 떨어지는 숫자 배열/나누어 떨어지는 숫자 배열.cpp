#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    int cnt=0;
    for(int a:arr){
        if(a%divisor==0)
        {
            answer.push_back(a);
            cnt=cnt+1;
        }
            
    }
    if(cnt==0)
        answer.push_back(-1);

    sort(answer.begin(),answer.end());
    return answer;
}