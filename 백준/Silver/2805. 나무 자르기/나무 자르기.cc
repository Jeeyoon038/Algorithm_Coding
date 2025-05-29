#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
//여기서 이진 탐색은 톱의 길이로 됨

int main() {
	long long N, M;
	cin >> N >> M;
	cin.ignore();

	string s;
	getline(cin, s);

	stringstream ss(s);

	vector <int> length;
	int num;

	while (ss >> num) { //공백마다 숫자를 읽어서 num에 저장, 읽을 수 있는 동안 반복
		length.push_back(num);
	}

	sort(length.begin(), length.end());

	long long start, mid, end;
	start = 1;
	end = length[N - 1];
	long long result = 0;

	while (start <= end) {
		long long cnt = 0;
		long long left = 0;
		mid = (start + end) / 2;

		for (int i = 0;i < N;i++) {
			if (length[i] > mid) {//톱 길이가 나무크기보다 작을 때
				left = length[i] - mid;
			}
			else {
				left = 0;
			}
			cnt = cnt + left;
		}

		if (cnt >= M) {//길이 M 이상의 나무를 가져간다는 것은, 톱 길이 mid가 너무 작다는 뜻
			result = mid;
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}

	cout << result;
	return 0;
}