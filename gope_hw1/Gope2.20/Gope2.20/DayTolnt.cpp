#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "20201599 �̰Ǿ�" << endl;
	
	string strDays;
	int nDays;
	
	cout << "������ ���� �����Դϱ�? �� ���ڷ� �Է��� �ּ���." << endl;
	cin >> strDays;

	if (strDays == "������") {
		nDays = 1;
	}
	else if (strDays == "ȭ����") {
		nDays = 2;
	}
	else if (strDays == "������") {
		nDays = 3;
	}
	else if (strDays == "�����") {
		nDays = 4;
	}
	else if (strDays == "�ݿ���") {
		nDays = 5;
	}
	else if (strDays == "�����") {
		nDays = 6;
	}
	else if (strDays == "�Ͽ���") {
		nDays = 7;
	}

	cout << "������" << nDays << "��° �����Դϴ�." << endl;

	switch (nDays)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			cout << "���߿� ������" << endl;
			break;
		case 6:
		case 7:
			cout << "�ָ��� ��̰�" << endl;
			break;
	}
}