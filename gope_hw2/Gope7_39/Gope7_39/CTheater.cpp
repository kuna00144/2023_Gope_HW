#include "CTheater.h"

int CTheater::m_nNumberOfTheater = 0;

void CTheater::PrintNumberOfTheater() {
	cout << "��ȭ��" << m_nNumberOfTheater << endl;
}

CTheater::CTheater() { // �Ű������� ���� ������
	// default ������
	m_strName = "�ް��ڽ�";
	m_nTripTime = 10;
	m_nNumberOfTheater++;
	for (int nIndex = 0; nIndex < nSizeOfShowTime; nIndex++) {
		m_pnShowTime[nIndex] = 0;
	}
}

CTheater::CTheater(string strName, int nTripTime, int pnShowTime[], int nSize) { // �Ű������� �ִ� ������
	m_strName = strName;
	m_nTripTime = nTripTime;
	m_nNumberOfTheater++;
	for (int nIndex = 0; nIndex < nSize; nIndex++) {
		m_pnShowTime[nIndex] = pnShowTime[nIndex];
	}
}

void CTheater::SetName(string strName) {  // mutator
	m_strName = strName;
}

string CTheater::GetName() {              // accessor
	return m_strName;
}

void CTheater::SetTripTime(int nTripTime) {  // mutator
	m_nTripTime = nTripTime;
}

// accessor
int CTheater::GetTripTime()
{
	return m_nTripTime;
}

// precondition nSize <= 10
void CTheater::SetShowTime(int pnShowTime[], int nSize) {
	for (int nIndex = 0; nIndex < nSize; nIndex++) {
		m_pnShowTime[nIndex] = pnShowTime[nIndex];
	}
}

// precondition nSize <= 10
void CTheater::GetShowTime(int pnShowTime[], int nSize) {
	for (int nIndex = 0; nIndex < nSize; nIndex++) {
		pnShowTime[nIndex] = m_pnShowTime[nIndex];
	}
}

void CTheater::PrintSchedule() {
	cout << "��ȭ �ð�ǥ�� ������ �����ϴ�." << endl;
	for (int nIndex = 0; nIndex < nSizeOfShowTime; nIndex++) {
		if (m_pnShowTime[nIndex] == 0) {
			continue;
		}
		cout << m_pnShowTime[nIndex] << endl;
	}
}

void CTheater::InputTheaterInfo(string strName, int nTripTime, int pnShowTime[], int nSize) {
	m_strName = strName;
	m_nTripTime = nTripTime;
	for (int nIndex = 0; nIndex < nSize; nIndex++) {
		m_pnShowTime[nIndex] = pnShowTime[nIndex];
	}
}
/*
#include <iostream>
#include <string>
#include <array>
#include <cstdlib>
using namespace std;


class Theater {
public:
	Theater();
	Theater(string strName, int nTripTime, int* pnShowTime, int nSizeOfArray);
	void InputTheaterInfo();
	void PrintSchedule();
	void PrintNumberOfTheater();
private:
	static int m_nNumberOfTheater;
	string m_strName;
	int m_nTripTime;
	int m_pnShowTime[10];
};
int Theater::m_nNumberOfTheater = 0;
int main() {

	int ShowTime[] = { 200, 320, 440, 560, 680, 800, 920, 1040, 1160, 1280 };
	Theater cgv("CGV", 120, ShowTime, sizeof(ShowTime) / sizeof(*ShowTime));
	cgv.PrintSchedule();
	Theater megabox("MEGABOX", 120, ShowTime, sizeof(ShowTime) / sizeof(*ShowTime));
	megabox.PrintSchedule();
	Theater lotte("LOTTE CINEMA", 120, ShowTime, sizeof(ShowTime) / sizeof(*ShowTime));
	lotte.PrintSchedule();
	cout << "ParkHyunBIn 20201589";
	return 0;
}

void Theater::InputTheaterInfo() {
	cout << "Enter Movie Name : ";
	cin >> m_strName;
	cout << "Enter Trip time : ";
	cin >> m_nTripTime;
	cout << "Enter ShowTIme : ";
	for (int i = 0; i < 10; i++) {
		cin >> m_pnShowTime[i];
	}
}

void Theater::PrintSchedule() {
	cout << "Movie name is " << m_strName << endl;
	cout << "TripTime is " << m_nTripTime / 60 << "hour" << m_nTripTime % 60 << "min." << endl;
	for (int i = 0; i < 10; i++) {
		cout << m_pnShowTime[i] / 60 << ":" << m_pnShowTime[i] % 60 << "   ";
	}
	cout << endl;
	PrintNumberOfTheater();
}

Theater::Theater(string strName, int nTripTime, int* pnShowTime, int nSizeOfArray) {
	m_strName = strName;
	m_nTripTime = nTripTime;
	for (int i = 0; i < 10; i++) {
		if (i < nSizeOfArray) {
			m_pnShowTime[i] = pnShowTime[i];
		}
		else {
			m_pnShowTime[i] = 0;
		}
	}
	m_nNumberOfTheater++;
}
void Theater::PrintNumberOfTheater() {
	cout << "Number Of Theater is " << m_nNumberOfTheater << endl;
} */