#include <iostream>
#include <deque>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, L;

	cin >> N >> L;
	deque<pair<int, int>> mydeque;

	for (int i = 0; i < N; i++) {
		int now;
		cin >> now;
		// 값이 들어올 때마다 정렬하지 않고
		// 현재 수보다 큰 값을 덱에서 제거하여 시간 복잡도를 줄임
		while (mydeque.size() && mydeque.back().second > now) {
			mydeque.pop_back();
		}
		mydeque.push_back(make_pair(i,now));
		// 범위에서 벗어난 값은 덱에서 제거
		if (mydeque.front().first <= i - L) {
			mydeque.pop_front();
		}
		cout << mydeque.front().second << ' ';
	}
}