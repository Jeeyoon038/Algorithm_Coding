#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    
    int sum=0;
    
    for(int a:arr){
        sum=sum+a;
    }
    double size=arr.size();
    
    answer=sum/size;
    
    return answer;
}