#include <iostream>
using namespace std;


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	int tmp;
	int S[100001] = { 0, };
	int a, b;

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		cin >> tmp;
		S[i] = S[i - 1] + tmp; // ÇÕ ¹è¿­
	}

	for (int i = 1; i <= M; i++) {
		cin >> a >> b;
		cout << S[b] - S[a - 1] << "\n";
	}
}