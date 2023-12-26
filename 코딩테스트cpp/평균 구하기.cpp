#include <iostream>

using namespace std;

int main() {
	int N;
	int max = -1;
	double score[1000];
	double sum = 0.0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> score[i];
	}
	
	for (int i = 0; i < N; i++) {
		if (max < score[i]) {
			max = score[i];
		}
	}
	for (int i = 0; i < N; i++) {
		score[i] = score[i] / max * 100;
		sum += score[i];
	}

	cout << sum / N << endl;
	
}