#include <string>
#include <vector>
#include <sstream>
using namespace std;

string solution(string s) {
    string answer = "";
    
    stringstream ss(s);
    vector<int> v;
    
    int a;
    while(ss>>a){
        v.push_back(a);
    }
    
    int min_num=v[0];
    int max_num=v[0];
    
    for(int b:v){
        min_num=min(min_num,b);
        max_num=max(max_num,b);
    }
    answer=to_string(min_num)+" "+to_string(max_num);
    return answer;
}