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
		// ���� ���� ������ �������� �ʰ�
		// ���� ������ ū ���� ������ �����Ͽ� �ð� ���⵵�� ����
		while (mydeque.size() && mydeque.back().second > now) {
			mydeque.pop_back();
		}
		mydeque.push_back(make_pair(i,now));
		// �������� ��� ���� ������ ����
		if (mydeque.front().first <= i - L) {
			mydeque.pop_front();
		}
		cout << mydeque.front().second << ' ';
	}
}