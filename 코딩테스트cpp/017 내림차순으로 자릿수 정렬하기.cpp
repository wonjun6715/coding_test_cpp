#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	string str;

	cin >> str;

	vector<int> A(str.size(), 0);

	for (int i = 0; i < str.size(); i++) {
		A[i] = stoi(str.substr(i, 1));
	}
	
	for (int i = 0; i < str.length(); i++) {
		int max = i;
		for (int j = i + 1; j < str.length(); j++) {
			if (A[max] < A[j]) {
				max = j;
			}
		}
		if (max != i) {
			int tmp = A[i];
			A[i] = A[max];
			A[max] = tmp;
		}
	}

	for (int i = 0; i < A.size(); i++) {
		cout << A[i];
	}

	
}