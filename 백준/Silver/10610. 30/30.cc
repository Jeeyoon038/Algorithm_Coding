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
	}//string num의 문자를 숫자로 바꿔서 vector에 저장

	int length = digits.size();
	int sum = 0;
	bool hasZero = false;

	for (int i = 0;i < length;i++) {

		sum = sum + digits[i]; //숫자의 각 자리 수를 합한 sum
		if (digits[i] == 0) hasZero = true; //숫자에 0이 포함되어있는지 확인
	}
	
	if (sum % 3 == 0 and hasZero!=0) {
		sort(digits.begin(), digits.end(), greater<int>()); //배열을 내림차순으로 정렬
		for (int num : digits) {
			cout << num;
		}
	}
	else {
		cout << -1;
	}

	

	return 0;
}
