#include <iostream>
#define MOD 10007
using namespace std;

int main() {

	int N;
	cin >> N;

	int dp[1001][10];

	for (int i = 0;i <=9;i++) {
		dp[1][i] = 1;
	}

	for (int i = 2;i <= N;i++) {
		for (int j = 0;j <= 9;j++) {
			int sum = 0;
			if (j == 0)
				dp[i][j] = 1;
			else
			{
				for (int k = j ;k >= 0;k--) {
					sum = sum + dp[i - 1][k];
				}
				dp[i][j] = sum;
			}
			
			dp[i][j] %= MOD;
		}
	}


	long long result=0;

	for (int i = 0;i <= 9;i++) {
		result = (result + dp[N][i]) % MOD;
	}

	cout << result << endl;
	return 0;
}