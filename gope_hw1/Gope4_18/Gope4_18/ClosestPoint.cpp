#include <iostream>
using namespace std;

double FindClosetPoint(double* pSample, int nSizeOfArray, double target, double& nearest);

int main() {
	cout << "20201599 �̰Ǿ�" << endl;

	const int nSizeOfArray = 5;
	double pSample[nSizeOfArray] = { 0.3, 0.6, 0.1, 0.4, 0.8 };
	double target, diff, nearest;

	cout << "0�� 1 ������ ���ڸ� �Է����ּ���." << endl;
	cin >> target;

	diff = FindClosetPoint(pSample, nSizeOfArray, target, nearest);

	cout << "���� ������ ����" << nearest << "�� ���̴�" << diff << "�Դϴ�." << endl;
}

double FindClosetPoint(double* pSample, int nSizeOfArray, double target, double& nearest) {
	double minDiff = 1;
	double diff = 1;

	for (int i = 0; i < nSizeOfArray; i++) {
		double val = pSample[i];
		diff = abs(target - val);

		if (diff < minDiff) {
			minDiff = diff;
			nearest = val;
		}
	}

	return minDiff;

}