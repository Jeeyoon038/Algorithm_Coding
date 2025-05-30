#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*요약
1) 집 좌표를 정렬한 뒤,
2) 공유기 사이의 최소 거리를 (1~최대거리) 사이에서 이분 탐색
3) 각 mid마다 그리디하게 공유기 설치해보고, 설치 가능한 경우 최대 거리 후보를 갱신*/

int main() {
	int N, C;
	cin >> N >> C;

	vector <int> houses;

	for (int i = 0;i < N;i++) {
		int temp;
		cin >> temp;
		houses.push_back(temp);
	}

	//1. 주어진 집들의 좌표를 정렬한다.
	sort(houses.begin(), houses.end());

	//2. 집들 사이의 거리를 초기화한다
	//최소 거리 : 1, 최대 거리 : 처음 집~마지막 집 으로 초기화
	//거리를 이용하여 이분탐색을 진행

	int start = 1;
	int end = houses[N - 1] - houses[0];
	int result = 0;

	//3. 집들 사이의 거리를 기준으로 이분 탐색을 진행한다.
	while (start <= end) {
		int mid = (start + end) / 2;

		int cnt=1;
		int prev_house = houses[0];

		for (int i = 1;i < N;i++) {
			if (houses[i] - prev_house >= mid) {
				cnt++;
				prev_house = houses[i];
			}
		}

		//4. 3번을 만족하는 거리 중 최댓값을 갱신한다
		//공유기를 제한 갯수 이상 사용했을 경우, 공유기를 설치하는 거리를 늘린 후 다시 설치해 본다

		if (cnt >= C) {
			result = max(result, mid);
			start = mid + 1;
		}

		//공유기를 제한 갯수 미만 사용했을 경우, 공유기를 설치하는 거리를 좁힌 후 다시 설치해 본다.
		else
			end = mid - 1;

	}


	cout << result << endl;



	return 0; 
}