#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    
    vector<pair<string,int>> month_pair = {
    {"Jan",31}, {"Feb",29}, {"Mar",31}, {"Apr",30},
    {"May",31}, {"Jun",30}, {"Jul",31}, {"Aug",31},
    {"Sep",30}, {"Oct",31}, {"Nov",30}, {"Dec",31}
};


    
    int date_sum=0;
    for(int i=0;i<a-1;i++){
        date_sum+=month_pair[i].second;
    }
    
    date_sum+=b;
    
    int day;
    day=date_sum%7;
    
    if(day==0)
        answer="THU";
    else if(day==1)
        answer="FRI";
    else if(day==2)
        answer="SAT";
    else if(day==3)
        answer="SUN";
    else if(day==4)
        answer="MON";
    else if(day==5)
        answer="TUE";
    else if(day==6)
        answer="WED";
    
    
    
    return answer;
}