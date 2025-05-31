#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    
    for(int i=1;i<food.size();i++){
        if(food[i]%2!=0)
            food[i]=food[i]-1;
        food[i]=food[i]/2;
    }
    //[1,1,2,3]
    for(int i=1;i<food.size();i++){
        for(int j=0;j<food[i];j++){
            answer+=to_string(i); //i라는 숫자를 문자열로 바꿔야함.
        }
    }
    string reversed_answer=answer;
    reverse(reversed_answer.begin(),reversed_answer.end());
    answer+='0';
    answer+=reversed_answer;
    
    //문자열을 뒤집는 함수 reverse
    return answer;
}