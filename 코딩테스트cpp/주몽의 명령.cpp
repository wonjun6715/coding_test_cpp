#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio;
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	int count = 0;
	
	cin >> n;
	cin >> m;

	int start_index = 0;
	int end_index = n - 1;

	vector<int> arr;

	for (int i = 0; i < n; i++) {
		int tmp;
		cin >> tmp;
		arr.push_back(tmp);
	}

	sort(arr.begin(), arr.end());

	while (start_index < end_index) {
		if (arr[start_index] + arr[end_index] < m) {
			start_index++;
		}
		else if (arr[start_index] + arr[end_index] > m) {
			end_index--;
		}
		else {
			count++;
			start_index++;
			end_index--;
		}
	}

	cout << count;
}