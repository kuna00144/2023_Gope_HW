#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "20201599 �̰Ǿ�" << endl;
	char chString1[30] = "Hello", chString2[30];
	string strEx, strF;
	int pos = 0;
	string str;
	strEx = "How are you? ";
	strF = "are";

	cout << "are ���� ���� ��ġ : " << strEx.find(strF, pos) << endl; // str.find(ã�� �ܾ�, ������ ã����)
	// str.find_first_of(strF, pos)�� a, r, e�߿� ���� ������ ��ġ�� ����
	strcpy_s(chString1, strEx.c_str());

	cout << chString1 << endl;
}