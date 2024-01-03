#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
#include <map>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int start_index = 1;
	int end_index = 1;
	int sum = 1;
	int count = 1;
	int N;

	cin >> N;

	while (end_index != N) {
		if (sum > N) {
			sum -= start_index;
			start_index++;
		}
		else if (sum < N) {
			end_index++;
			sum += end_index;
		}
		else if (sum == N) {
			count++;
			end_index++;
			sum += end_index;
		}
	}
	cout << count;
}