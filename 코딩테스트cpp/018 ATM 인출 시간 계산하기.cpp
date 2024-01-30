#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	int N;

	cin >> N;

	vector<int> A(N, 0);
	vector<int> S(N, 0);

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}
	// »ðÀÔ Á¤·Ä
	int key;
	int i, j;
	for (i = 1; i < N; i++) {
		key = A[i];
		for (j = i - 1; j >= 0 && A[j] > key; j--) {
			A[j + 1] = A[j];
		} 
		A[j + 1] = key;
	}

	S[0] = A[0];
	for (int i = 1; i < N; i++) {
		S[i] = S[i - 1] + A[i];
	}

	int sum = 0;

	for (int i = 0; i < N; i++) {
		sum += S[i];
	}

	cout << sum;




}