#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector <pair<int, int>> meeting;
	for (int i = 0;i < N;i++) {
		int start, end;
		cin >> start >> end;
		meeting.push_back({ start,end });
	}
	
	int start_time = 0;
	int end_time = 0;
	int duration = end_time - start_time;

	// 끝나는 시간을 기준으로 정렬, 끝나는 시간이 같으면 시작 시간 오름차순
	sort(meeting.begin(), meeting.end(), [](pair<int, int> a, pair<int, int> b) {
		if (a.second == b.second)
			return a.first < b.first;
		return a.second < b.second;
		});


	int count = 0;
	int last_end_time = 0;

	for (int i = 0;i < N;i++) {
		if (meeting[i].first >= last_end_time) {
			count++;
			last_end_time = meeting[i].second;
		}
	}

	
	cout << count << endl;

	return 0;
}