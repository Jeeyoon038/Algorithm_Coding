#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    //명함은 가로와 세로가 바뀔 수 있으니까
    //각 명함에서 더 긴 쪽을 가로, 짧은 쪽을 세로로 생각하면 된다
    //이렇게 하면 가장 긴 가로, 가장 긴 세로를 구하면 그것이 최소 지갑 크기
    int max_width=0;
    int max_height=0;
    
    for(auto card:sizes){
        int w=max(card[0],card[1]);//가로는 더 큰 값
        int h=min(card[0],card[1]);//세로는 더 작은 값
        max_width=max(max_width,w);
        max_height=max(max_height,h);
    }
    answer=max_width*max_height;
    return answer;
}