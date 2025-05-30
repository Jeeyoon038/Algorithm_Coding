#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    
    int a=arr1.size();
    int b=arr1[0].size();
    vector<vector<int>> answer(a,vector<int>(b)); //2차원 벡터의 크기 a*b
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            answer[i][j]=arr1[i][j]+arr2[i][j];
            //벡터에 새로운 원소를 추가할 때 : push_back
            //벡터의 크기를 미리 정해두지 않았을 때 : push_back
            //벡터의 크기를 미리 정해두고 요소를 대입 할 때 : =
            //벡터의 기존 원소를 수정할 때 : =
        }
        
    }
    
    return answer;
}