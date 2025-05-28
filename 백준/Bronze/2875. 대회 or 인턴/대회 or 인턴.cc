#include <iostream>
using namespace std;

int main() {

	int n, m, k;
	cin >> n >> m >> k;

	int team = 0;

	if (n / 2 <= m) {
		team = n / 2;
	}
	else if (n / 2 > m) {
		team = m;
	} //인턴십을 고려하지 않고 만들 수 있는 팀의 개수

	k = k - (n - team * 2) - (m - team); 
	//(n-team*2)+(m-team) : 팀에 안 들어간 사람 수 = 인턴십에 넣을 수 있는 사람
	//추가로 빼야하는 인원만 확인하겠다!!

	if (k > 0) { //인턴십 인원이 부족할 경우
		if (k % 3 == 0) {
			team = team - k / 3; //팀 하나는 3명 필요, 3으로 나누어 떨어지면, k/3팀만큼 줄이면 됨
		}
		else {
			team = team - k / 3 - 1;
		}
	}
	cout << team << endl;

	return 0;
}