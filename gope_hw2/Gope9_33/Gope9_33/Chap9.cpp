#include <iostream>
#include <cstring>
using namespace std;

int main() {
	cout << "20201599 �̰Ǿ�" << endl;
	char chString1[30] = "Hello", chString2[30];
	strcpy_s(chString2, "Kim"); // strcpy : �ڿ� ������ �տ� �����ؿ�

	cout << "chString1 = " << chString1 << " / chString2 = " << chString2 << endl;

	if (strcmp(chString1, chString2) == 0){
		cout << "�� String�� �����ϴ�. " << endl;
	}
	else {
		cout << "�� String�� �ٸ��ϴ�." << endl;
	}

	cout << "�� chString2�� �Է����ּ���. : " << endl;
	cin >> chString2;
	strcat_s(chString1, chString2); // strcat : �տ����� �ڿ��� �̾����
	cout << chString1 << endl;

	cin.ignore(30, '\n'); // �̷��� getline���ֱ� ���� ignore�� ���־�� �Ѵ�.
	cin.getline(chString2, 30);
	cout << "���ο� chString2 = " << chString2 << endl;

	return 0;
}