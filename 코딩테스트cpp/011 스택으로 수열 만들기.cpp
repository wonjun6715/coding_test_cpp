#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;

	cin >> N;

	vector<int> A(N, 0);
	vector<char> result;

	for (int i = 0; i < N; i++) {
		cin >> A[i];
	}

	stack<int>myStack;
	int num = 1;
	bool check = true;

	for (int i = 0; i < N; i++) {
		int su = A[i];
		if (su >= num) {
			while(su >= num){
				myStack.push(num);
				num++;
				result.push_back('+');
			}
			myStack.pop();
			result.push_back('-');
		}
		else if (su < num) {
			int n = myStack.top();
			myStack.pop();

			if (n > su) {
				cout << "NO";
				check = false;
				break;
			}
			else {
				result.push_back('-');
			}
		}
	}
	if (check) {
		for (int i = 0; i < result.size(); i++) {
			cout << result[i] << "\n";
		}
	}
}