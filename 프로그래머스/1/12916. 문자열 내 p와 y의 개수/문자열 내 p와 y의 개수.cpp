#include <string>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <cctype>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    
    transform(s.begin(),s.end(),s.begin(),::tolower);
    stringstream ss(s);
    
    int arr[2]={0,0};
    
    char a;
    while(ss>>a){
        if(a=='p')
            arr[0]=arr[0]+1;
        if(a=='y')
            arr[1]=arr[1]+1;
    }
    
    if(arr[0]==arr[1])
        answer=true;
    else
        answer=false;
    
    
    return answer;
}