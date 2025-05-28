#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	
	string num;
	cin >> num;
	int result=0;
	vector <int> digits;


	for (char c : num) {
		digits.push_back(c - '0');
	}

	int length = digits.size();
	int sum = 0;
	bool hasZero = false;

	for (int i = 0;i < length;i++) {
		
		sum = sum + digits[i];
		if (digits[i] == 0) hasZero = true;
	}

	
	if (sum % 3 == 0 and hasZero!=0) {
		sort(digits.begin(), digits.end(), greater<int>());
		for (int num : digits) {
			cout << num;
		}
	}
	else {
		cout << -1;
	}

	

	return 0;
}