#include <string>
#include <vector>

using namespace std;

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 123456789;
    int num=absolutes.size();
    int sum=0;
    int a;
    for(int i=0;i<num;i++){
        if(signs[i]==false)
            a=absolutes[i]*(-1);
        else
            a=absolutes[i];
        sum=sum+a;
    }
    answer=sum;
    return answer;
}