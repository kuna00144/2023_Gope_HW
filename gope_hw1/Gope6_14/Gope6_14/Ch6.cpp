#include <iostream>
#include <string>
using namespace std;

// ��ȭ�� structure

struct Theater {
	string strName;  // ��ȭ�� �̸�
	int nTripTime;   // ��ȭ�� ���� �Ÿ�
	int pShowTime[10];  // �� �ð� �ִ� 10������ ���ڷ� 1300 �̸� 13�� 00��
};

int main() {
	cout << "20201599 �̰Ǿ�" << endl;

	Theater aTheater = { "�ް��ڽ���Ʈ����", 10, {1300, 1600} };

	cout << "�б� ��ó ��ȭ���� " << aTheater.strName << "�̰�, �Ÿ��� " << aTheater.nTripTime << "���� �ɸ���" << endl;
	cout << "�󿵽ð��� " << endl;
	
	for (int nindex = 0; nindex < 10; nindex++) {
		int nTime = aTheater.pShowTime[nindex];
		if (nTime == 0) {
			continue;
		}
		cout << nTime << endl;
	}
}