#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

string solution(string s) {
    string answer = "";
    stringstream ss(s);
    vector <char> v;
    char a;
    while(ss>>a){
        v.push_back(a);
    }
    
    sort(v.begin(),v.end(),greater<char>());
    
    for(auto a:v){
        answer=answer+a;
    }
    return answer;
}