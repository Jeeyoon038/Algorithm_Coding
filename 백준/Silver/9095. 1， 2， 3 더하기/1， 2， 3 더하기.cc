#include <iostream>
#include <vector>
using namespace std;

int main() {

	int num;
	cin >> num;
	
	vector<int>test_result;
	vector<int> test_case;

	int dp[1001];

	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;

	int max = 0;
	
	for (int i = 0;i < num;i++) {
		int a;
		cin >> a;
		test_case.push_back(a);
		if (a >= max) {
			max = a;
		}
	}

	for (int i = 3;i <= max;i++) {
		dp[i] = dp[i-3] + dp[i - 2] +dp[i - 1];
	}

	for (int i = 0;i < num;i++) {
		int a = dp[test_case[i]];
		test_result.push_back(a);
	}

	for (int k : test_result) {
		cout <<k << "\n";
	}

	return 0;
}