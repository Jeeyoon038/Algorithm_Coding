using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long init_price=price;
    long long sum=0;
    
    for(int i=0;i<count;i++){
        init_price=price*(i+1);
        sum=sum+init_price;
    }
    long long my_money=money-sum;
    
    if(my_money<0){
        answer=-my_money;
    }
    else
        answer=0;

    return answer;
}