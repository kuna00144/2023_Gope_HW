#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
using namespace std;

int main() {
	cout << "20201599 �̰Ǿ�" << endl;

	int aiRand;
	string userStr;
	string aiStrRand;
	cout << "���������� ������ �����ϰڽ��ϴ�." << endl;
	cout << "R(Rock), P(Paper), S(Scissors) �� �ϳ��� ���ÿ�." << endl;
	cin >> userStr;

	srand(time(0));
	aiRand = rand() % 3;

	switch (aiRand) {
		case 0:
			aiStrRand = "R";
			break;
		case 1:
			aiStrRand = "P";
			break;
		case 2:
			aiStrRand = "S";
			break;
	}

	cout << "��ǻ�ʹ�" << aiStrRand << "�� �����߰� ����ڴ���" << userStr << "�� �����ϼ̽��ϴ�." << endl;

	if (userStr == "R" && aiStrRand == "S" || userStr == "P" && aiStrRand == "R" || userStr == "S" && aiStrRand == "P") {
		cout << "����" << endl;
	}
	else if (userStr == aiStrRand) {
		cout << "�����ϴ�" << endl;
	}
	else {
		cout << "�й�" << endl;
	}
	
	return 0;
}