#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    vector<char>word;
    for(char c:s)
        word.push_back(c);
      
    int num=0;
    vector<int> index;
    for(int i=0;i<s.size();i++){
        index.clear();
        if(i==0)
            answer.push_back(-1);
        else{
          for(int j=0;j<i;j++){
              if(word[j]==word[i])
                  index.push_back(j);
                     
          }
            if(index.empty()){
                answer.push_back(-1);
            }
            else
                answer.push_back(i-index.back());
        }
        
    }
    
    return answer;
}