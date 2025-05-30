#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int max_num=max(n,m);
    int min_num=min(n,m);
    int a=1;
    
    for(int i=1;i<=min_num;i++){
        
        if(n%i==0 and m%i==0){
            a=max(a,i);
        }
    }
    answer.push_back(a);
    
    int mod_1=n/a;
    int mod_2=m/a;
    
    int b=a*mod_1*mod_2;
    
    answer.push_back(b);
    return answer;
}