#include <string>
#include <vector>
#include <sstream>
using namespace std;

bool solution(int x) {
    bool answer = true;
    
    vector <int> v;
    stringstream ss(to_string(x));
    
    char a;
    while(ss>>a){
        v.push_back(a-'0');
    }
    
    int sum=0;
    
    for(int a:v){
        sum=sum+a;
    }
    
    if(x%sum==0)
        answer=true;
    else
        answer=false;
    
    return answer;
}