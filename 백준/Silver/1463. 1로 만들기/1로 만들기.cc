#include <iostream>
#include <algorithm>
using namespace std;
int dp[1000000];

int main() {
	int X;
	cin >> X;
	
	for (int i = 2;i <= X;i++) {
		dp[i] = dp[i - 1] + 1;

		if (i % 2 == 0) {
			dp[i] = min(dp[i], dp[i / 2] + 1);
		}

		if (i % 3 == 0) {
			dp[i] = min(dp[i], dp[i / 3] + 1);
		}
	}
	cout << dp[X];


	return 0;


}