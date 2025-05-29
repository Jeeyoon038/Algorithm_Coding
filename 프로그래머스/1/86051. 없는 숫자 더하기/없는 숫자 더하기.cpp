#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = -1;
    sort(numbers.begin(),numbers.end());
    int sum=0;
    for(int i=0;i<=9;i++)
        sum=sum+i;
    
    for(int a:numbers){
        sum=sum-a;
    }
    
    answer=sum;
    
    return answer;
}