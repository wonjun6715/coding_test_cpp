#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> A;

	A.push_back(10);
	A.push_back(30);
	A.push_back(5);
	A.push_back(8);
	A.push_back(6);

	A.push_back(1);
	A.insert(A.begin(), 7); // 맨 앞에 7을 삽입
	A.insert(A.begin() + 2, 10); // index 2에 위치해 10 삽입

	A[4] = -5;

	A.pop_back(); // 마지막 값 삭제
	A.erase(A.begin() + 3); // index 3에 해당하는 값 삭제 

	cout << A.size() << endl;
	cout << A.front() << endl;
	cout << A.back() << endl;
	cout << A[3] << endl;
	cout << A.at(5) << endl;

	A.clear(); // 모든 값 삭제
}