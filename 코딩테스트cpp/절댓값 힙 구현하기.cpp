#include <iostream>
#include <queue>

using namespace std;

struct compare {
	bool operator()(int o1, int o2) {
		int first_obs = abs(o1);
		int second_obs = abs(o2);

		if (first_obs == second_obs) {
			return o1 > o2;
		}
		else {
			return first_obs > second_obs;
		}
	}
};
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	priority_queue<int, vector<int>, compare> MyQueue;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int request;
		cin >> request;

		if (request == 0) {
			if (MyQueue.empty()) {
				cout << "0\n";
			}
			else {
				cout << MyQueue.top() << '\n';
				MyQueue.pop();
			}
		}
		else {
			MyQueue.push(request);
		}
	}
}