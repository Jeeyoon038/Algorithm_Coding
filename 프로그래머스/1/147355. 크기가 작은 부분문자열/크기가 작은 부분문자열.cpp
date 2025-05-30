#include <string>
#include <vector>
#include <sstream>
#include <cmath>
using namespace std;

int solution(string t, string p) {
    int answer = 0;
    vector<int> v;
    int p_len=p.length();
    int t_len=t.length();
    stringstream ss(t);
    
    char a;
    while(ss>>a){
        v.push_back(a-'0'); //char를 문자로 변환, t 문자열을 숫자로 벡터에 저장
    }
    
    //벡퍼 v를 p_len크기로 하나씩 잘라서 숫자로 만들어서 새로운 벡터에 넣어야함.
    vector <long long> result;
    long long num;
    for(int i=0;i<=t_len-p_len;i++){
        num=0;//num값을 반복문 안에서 초기화해줘야한다!!!
        for(int j=0;j<p_len;j++){
            num=num*10+v[i+j]; //자리수 계산하기!! 방법 알아두기
        }
        result.push_back(num);
    }
    
    long long compare=stoll(p); 
    //stoi : int 범위까지만 처리 가능, 문자열을 숫자로 변환
    //stoll : long long 범위 처리 가능
    int cnt=0;
    
    for(auto c:result){
        if(c<=compare)
            cnt++;
    }
    

    answer=cnt;
    
    return answer;
}