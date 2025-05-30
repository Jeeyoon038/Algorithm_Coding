#include <string>
#include <vector>
#include <cmath>
using namespace std;

int solution(int left, int right) {
    int answer = 0;
    int sum=0;
    for(int i=left;i<=right;i++){
        sum=sum+i;
    }
    for(int i=left;i<=right;i++){
        int num=sqrt(i);
        if(num*num==i){
            sum=sum-i*2;
        }
    }
    answer=sum;
    return answer;
}