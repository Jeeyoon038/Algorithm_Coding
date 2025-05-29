#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector <int> answer;
    if(arr.size()==1)
        return {-1};
    
    int min_value=*min_element(arr.begin(),arr.end());
    //min_element는 주소를 반환하니까 실제 값을 얻으려면 *(역참조)를 써줘야 한다.
    
    for(int num:arr){
        if(num!=min_value){
            answer.push_back(num);
        }
    }
    
    return answer;
}