#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	vector<pair<int, int>> A(n);

	for (int i = 0; i < n; i++) {
		cin >> A[i].first;
		A[i].second = i;
	}

	sort(A.begin(), A.end());
	int max = 0;

	for (int i = 0; i < n; i++) {
		if (max < A[i].second - i) {
			max = A[i].second - i;
		}
	}

	cout << max + 1 << "\n";

}