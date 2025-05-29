#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
//이분탐색을 뭐에 대해 적용해야 하냐? : 랜선 길이 -> low, high, mid : 랜선의 길이

int main() {
	int K, N;
	cin >>K >> N;
	vector <long long> length;

	for (int i = 0;i < K;i++) {
		int a;
		cin >> a;
		length.push_back(a);
	}

	
	long long low, high, mid;
	
	sort(length.begin(), length.end());

	high = length[K - 1];

	low = 1;

	long long result = 0;

	
	while (low<=high) {
		int count = 0;
		mid = (low + high) / 2;
		
		for (int i = 0;i < K;i++) {
			count = count + length[i] / mid;
		}

		if (N <= count) {
			result = mid;
			low = mid + 1;
		}
		else
			high=mid-1; //잘라낸 랜선 개수가 부족(N>count), 더 짧게 잘라야 한다
		
	}

	cout << result;

	return 0;
}