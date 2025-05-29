#include <iostream>

using namespace std;

int main() {

	int num;
	cin >> num;

	int dp[1001];

	
	dp[1] = 1;
	dp[2] = 3;
	dp[3] = 5;
	

	for (int i = 4;i <= num;i++) {

		dp[i] = (2*dp[i - 2] + dp[i - 1]) % 10007;
	}

	cout << dp[num];


	return 0;
}