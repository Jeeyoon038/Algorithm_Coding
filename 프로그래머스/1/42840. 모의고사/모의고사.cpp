#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> human_1 = {1,2,3,4,5};
    vector<int> human_2 = {2,1,2,3,2,4,2,5};
    vector<int> human_3 = {3,3,1,1,2,2,4,4,5,5};
    
    int correct_1 = 0, correct_2 = 0, correct_3 = 0;
    
    for (int i = 0; i < answers.size(); i++) {
        if (answers[i] == human_1[i % human_1.size()]) correct_1++;
        if (answers[i] == human_2[i % human_2.size()]) correct_2++;
        if (answers[i] == human_3[i % human_3.size()]) correct_3++;
    }
    
    int max_score = max({correct_1, correct_2, correct_3});
    
    if (max_score == correct_1) answer.push_back(1);
    if (max_score == correct_2) answer.push_back(2);
    if (max_score == correct_3) answer.push_back(3);
    
    return answer;
}
