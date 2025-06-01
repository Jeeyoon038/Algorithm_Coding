#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> top_k;
    
    for(int i=0;i<score.size();i++){
        sort(top_k.begin(),top_k.end());
        if(top_k.size()<k){
            top_k.push_back(score[i]);
        }
        else{
            if(score[i]>top_k[0])
                top_k[0]=score[i];
        }
        sort(top_k.begin(),top_k.end());
        answer.push_back(top_k[0]);
    }
    
    
    
    return answer;
}