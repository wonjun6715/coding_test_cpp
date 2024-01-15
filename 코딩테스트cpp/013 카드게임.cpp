#include <iostream>
#include <vector>
#include <queue>

using namespace std;
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;

	cin >> N;
	int n = 0;
	queue<int> qu;

	for (int i = 1; i <= N; i++) {
		qu.push(i);
	}

	while(qu.size() > 1){
		if (n % 2 == 0) {
			qu.pop();
			n++;
		}
		else {
			int tmp;
			tmp = qu.front();
			qu.pop();
			qu.push(tmp);
			n++;
		}
	}
	cout << qu.front();
}