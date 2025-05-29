#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int num;
	cin >> num;

	vector <pair<int,int>> location;

	for (int i = 0;i < num;i++) {
		int x, y;
		cin >> x >> y;
		location.push_back({x,y});
	}

	sort(location.begin(), location.end());



	for (auto a : location) { //auto는 타입을 자동으로 추론하는 키워드
		cout << a.first << " " << a.second << "\n"; //pair의 first와 second
	}
	return 0;
}