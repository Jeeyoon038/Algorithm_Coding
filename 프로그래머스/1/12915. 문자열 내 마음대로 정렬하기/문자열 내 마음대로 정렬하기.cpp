#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    vector <pair<string,char>> v;
    
    for(int i=0;i<strings.size();i++){
        v.push_back({strings[i],strings[i][n]});
        //[{"sun",'u'},{"bed",'e'},{"car",'a'}]
    }
    sort(v.begin(),v.end(),[](pair<string,char>a,pair<string,char>b){
        if(a.second==b.second){
            return a.first < b.first;  // 사전순 비교
        }
            return a.second<b.second;
    });
    for(auto a:v){
        answer.push_back(a.first);
    }
    return answer;
}