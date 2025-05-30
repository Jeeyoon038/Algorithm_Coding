#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    vector<int> v;
    v=arr;
   
    for(int a:v){
        if(answer.empty())
            answer.push_back(a);
        else{
            if(answer.back()!=a)
                answer.push_back(a);
        }
    }

    return answer;
}