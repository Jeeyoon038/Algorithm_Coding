#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
	int N;
	cin >> N;

	vector<int>time;

	for (int i = 0;i < N;i++) {
		int a;
		cin >> a;
		time.push_back(a);
	}

	sort(time.begin(), time.end());

	int sum = 0;
	for (int i = 0;i < N;i++) {
		sum = sum + time[i] * (N - i);
	}
	cout << sum << endl;

	return 0;
}