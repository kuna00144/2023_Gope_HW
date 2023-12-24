#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
using namespace std;

int AmIWin(string strRPCInput, string strRPCCom);

int main() {
	cout << "20201599 �̰Ǿ�" << endl;

	int aiRand;
	int nWin;
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

	nWin = AmIWin(userStr, aiStrRand);

	cout << "��ǻ�ʹ�" << aiStrRand << "�� �����߰� ����ڴ���" << userStr << "�� �����ϼ̽��ϴ�." << endl;

	switch (nWin)
	{
		case 1:
			cout << "����ڴ��� �¸��Ͽ����ϴ�." << endl;
			break;
		case -1:
			cout << "����ڴ��� �й��Ͽ����ϴ�." << endl;
			break;
		case 0:
			cout << "�����ϴ�." << endl;
			break;
		default:
			cout << "�ٺ�" << endl;
			break;
	}

	return 0;
}

int AmIWin(string strRPCInput, string strRPCCom) {
	
	int nWin;

	if (strRPCInput == "R" && strRPCCom == "S" || strRPCInput == "P" && strRPCCom == "R" || strRPCInput == "S" && strRPCCom == "P") {
		nWin = 1;
	}
	else if (strRPCInput == "R" && strRPCCom == "P" || strRPCInput == "P" && strRPCCom == "S" || strRPCInput == "S" && strRPCCom == "R") {
		nWin = -1;
	}
	else if (strRPCInput == strRPCCom) {
		nWin = 0;
	}
	else {
		nWin = -8;
	}

	return nWin;
}