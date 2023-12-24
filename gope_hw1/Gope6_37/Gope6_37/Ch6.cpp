#include <iostream>
#include <string>
#include "CTheater.h"
using namespace std;

struct Theater {
	string strName;  // ��ȭ�� �̸�
	int nTripTime;   // ��ȭ�� ���� �Ÿ�
	int pShowTime[10];  // �� �ð� �ִ� 10������ ���ڷ� 1300 �̸� 13�� 00��
};

int main() {
	cout << "20201599 �̰Ǿ�" << endl;
	const int nSize = 10;
	int pShowTime[nSize] = { 1300, 1600 };
	CTheater aTheater;
	aTheater.InputTheaterInfo("�ް��ڽ���Ʈ����", 10, pShowTime, nSize);

	cout << "�б� ��ó ��ȭ���� " << aTheater.GetName() << "�̰�, �Ÿ��� " << aTheater.GetTripTime() << endl;
	aTheater.PrintSchedule();
}