#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    int a=commands.size();
    int i,j,k;
    vector<int> short_v;
    for(int num=0;num<a;num++){
        short_v.clear();
        i=commands[num][0];
        j=commands[num][1];
        k=commands[num][2];
        for(int l=i;l<=j;l++){
            short_v.push_back(array[l-1]);
        }
        sort(short_v.begin(),short_v.end());
        answer.push_back(short_v[k-1]);
    }
    return answer;
}