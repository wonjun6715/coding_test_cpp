#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int S, P; // S : DNA ���ڿ��� ����, P : �κ� ���ڿ��� ����
	int count = 0;
	cin >> S >> P;

	vector<char> str;

	for (int i = 0; i < S; i++) {
		char tmp;
		cin >> tmp;
		str.push_back(tmp);
	}

	int a_cnt, c_cnt, g_cnt, t_cnt; // ���ԵǾ���� �ּ� ����

	cin >> a_cnt >> c_cnt >> g_cnt >> t_cnt;

	int start = 0;
	int end = P - 1;

	// end�� S���� Ŀ���� �ȵǴ� ���� �־�� ��.
	map<char, int> mapset;
	mapset.insert({ 'A', 0 });
	mapset.insert({ 'C', 0 });
	mapset.insert({ 'G', 0 });
	mapset.insert({ 'T', 0 });

	for (int i = start; i <= end; i++) {
		if (str[i] == 'A') {
			mapset['A']++;
		}
		else if (str[i] == 'C') {
			mapset['C']++;
		}
		else if (str[i] == 'G') {
			mapset['G']++;
		}
		else if (str[i] == 'T') {
			mapset['T']++;
		}
	}
	if (mapset['A'] >= a_cnt && mapset['C'] >= c_cnt && mapset['G'] >= g_cnt && mapset['T'] >= t_cnt) {
		count++;
	}
	start++;
	end++;
	while (end < S) {
		mapset[str[start - 1]] -= 1;
		mapset[str[end]] += 1;
		if (mapset['A'] >= a_cnt && mapset['C'] >= c_cnt && mapset['G'] >= g_cnt && mapset['T'] >= t_cnt) {
			count++;
		}
		start++;
		end++;
	}
	cout << count;
}