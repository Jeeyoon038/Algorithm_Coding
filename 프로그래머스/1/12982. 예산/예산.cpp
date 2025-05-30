#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    sort(d.begin(), d.end());  // 작은 값부터 차례로
    
    int sum = 0;
    int cnt = 0;

    for (int i = 0; i < d.size(); i++) {
        if (sum + d[i] > budget) break;
        sum += d[i];
        cnt++;
    }

    answer = cnt;
    return answer;
}
