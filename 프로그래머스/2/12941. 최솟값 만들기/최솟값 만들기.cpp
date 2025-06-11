#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;
    
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    
    int sum=0;
    for(int i=0;i<A.size();i++){
        sum+=A[i]*B[A.size()-1-i];
    }
    answer=sum;
    return answer;
}