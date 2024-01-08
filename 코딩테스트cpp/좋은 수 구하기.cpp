#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio;
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n;
	int count = 0;
	cin >> n;

	vector<int> A(n, 0);
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	
	sort(A.begin(), A.end());

	for (int k = 0; k < n; k++) {
		long find = A[k];
		int i = 0;
		int j = n - 1;

		while (i < j) {
			if (A[i] + A[j] == find) {
				if (i != k && j != k) {
					count++;
					break;
				}
				else if (i == k) {
					i++;
				}
				else if (j == k) {
					j--;
				}
			}
			else if (A[i] + A[j] > find) {
				j--;
			}
			else if (A[i] + A[j] < find) {
				i++;
			}
		}
	}
	cout << count;
}