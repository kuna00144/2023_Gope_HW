#include <iostream>
#include <string>
#include "CTheater.h"
using namespace std;

int main() {
	cout << "20201599 �̰Ǿ�" << endl;
	const int nSize = 10;
	int pShowTime[nSize] = { 1300, 1600 };
	CTheater aTheater1;
	aTheater1.InputTheaterInfo("�ް��ڽ�", 10, pShowTime, nSize);

	cout << "�б� ��ó ��ȭ��1�� " << aTheater1.GetName() << "�̰�, �Ÿ��� " << aTheater1.GetTripTime() << endl;
	aTheater1.PrintSchedule();
	CTheater::PrintNumberOfTheater();

	CTheater aTheater2;
	int pShowTime2[nSize] = { 1200, 2000 };
	aTheater2.InputTheaterInfo("CGV", 20, pShowTime2, nSize);
	cout << "�б� ��ó ��ȭ��2�� " << aTheater2.GetName() << "�̰�, �Ÿ��� " << aTheater2.GetTripTime() << endl;
	aTheater2.PrintSchedule();
	CTheater::PrintNumberOfTheater();

	CTheater aTheater3;
	int pShowTime3[nSize] = { 1400, 1800 };
	aTheater3.InputTheaterInfo("�Ե��ó׸�", 40, pShowTime3, nSize);
	cout << "�б� ��ó ��ȭ��3�� " << aTheater3.GetName() << "�̰�, �Ÿ��� " << aTheater3.GetTripTime() << endl;
	aTheater3.PrintSchedule();
	CTheater::PrintNumberOfTheater();

}