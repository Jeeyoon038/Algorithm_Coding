#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	int num;
	cin >> num;

	vector <int> num_list(num);

	for (int i = 0;i < num;i++) {
		cin >> num_list[i];
	}

	sort(num_list.begin(), num_list.end());

	for (int num : num_list) {
		cout << num << "\n";
	}

	return 0;
}