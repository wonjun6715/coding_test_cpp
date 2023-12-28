#include <iostream>

using namespace std;
int S[1025][1025] = { 0, };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	int tmp;

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> tmp;
			S[i][j] = S[i - 1][j] + S[i][j - 1] + tmp - S[i - 1][j - 1];
		}
	}
	
	for (int i = 0; i < M; i ++) {
		int x1, y1, x2, y2;
		cin >> y1 >> x1 >> y2 >> x2; 
		cout << S[y2][x2] - S[y1 - 1][x2] - S[y2][x1 - 1] + S[y1 - 1][x1 - 1] << "\n";
	}

}