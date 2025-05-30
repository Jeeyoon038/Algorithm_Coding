#include <iostream>
#define MOD 1000000000
using namespace std;



int main() {

	

	int N;
	cin >> N;
	long long dp[101][10] = { 0 }; //d[i][j] : 길이가 i이고, 마지막 숫자가 j인 계단 수의 개수

	// 초기값: 한 자리 수에서는 1~9만 가능
	for (int i = 1; i <= 9; i++) {
		dp[1][i] = 1;
	}

	for (int i = 2;i <= N;i++) {
		for (int j = 0;j <= 9;j++) {
			if (j == 0)
				dp[i][j] = dp[i - 1][1];
			else if (j == 9)
				dp[i][j] = dp[i - 1][8];
			else
				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];
			dp[i][j] %= MOD;


		}
	}

	long long result = 0;
	for (int i = 0; i <= 9; i++) {
		result = (result + dp[N][i]) % MOD;
	}

	cout << result << endl;

	
	

	return 0;
}