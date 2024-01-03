// ���� �Է� 1
/*5 3
  1 2 3 1 2 */

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

	int N, M;
	long count = 0;
	int remainder;
	cin >> N >> M;
	vector<long> S(N, 0); // ������ ũ�Ⱑ N�̰�, ��� ���� 0���� �ʱ�ȭ
	vector<long> C(M, 0); // M���� ���� ������ ���� ����

	for (int i = 0; i < N; i++) {
		int tmp;
		if (i == 0) {
			cin >> tmp;
			S[0] = tmp;
			continue;
		}
		cin >> tmp;
		S[i] = S[i - 1] + tmp;
	}

	for (int i = 0; i < N; i++) {
		remainder = S[i] % M;
		if (remainder == 0) {
			count++;
		}
		C[remainder]++;
	}

	for (int i = 0; i < M; i++) {
		if (C[i] > 1) { // M���� ���� ������ ����
			count = count + (C[i] * (C[i] - 1) / 2); // C[i]�� �߿� 2���� �̴� ����� ��
		}
	}

	cout << count << "\n";
}