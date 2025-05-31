#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    int mod=0;
    int changed_total=n;
    int get=0;
    int still=0;
    int returned=0;
    
    while(true){
        if(changed_total<a)
            break;
        else{
            mod=changed_total/a;
            returned=mod*a;
            still=changed_total-returned;
            get+=mod*b;
            changed_total=still+mod*b;
        }
    }
    answer=get;
    return answer;
}