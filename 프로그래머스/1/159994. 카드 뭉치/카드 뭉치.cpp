#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    int cards1_index=0;
    int cards2_index=0;
    
    if((cards1.size()+cards2.size())<goal.size())
        answer="No";
    
    else{
        for(int i=0;i<goal.size();i++){
        if(cards1_index < cards1.size() && cards1[cards1_index]==goal[i]){
            cards1_index++;
        }
        else if(cards2_index < cards2.size() && cards2[cards2_index]==goal[i]){
            cards2_index++;
        }
        else{
            answer="No";
            break;
        }
        
        
        answer="Yes";
        
    }
    }
        
    
    return answer;
}