#include <iostream>
using namespace std;

int main() {
	cout << "20201599 �̰Ǿ�" << endl;
	int* p3, * p4;
	p3 = new int;
	p4 = new int;

	cout << "p3 : " << p3 << endl;
	cout << "p4 : " << p4 << endl;
	cout << "*p3 : " << *p3 << endl;
	cout << "*p4 : " << *p4 << endl;

	*p3 = 7;
	*p4 = 8;
	cout << "p3 : " << p3 << endl;
	cout << "p4 : " << p4 << endl;
	cout << "*p3 : " << *p3 << endl;
	cout << "*p4 : " << *p4 << endl;

	p3 = p4;
	cout << "p3 : " << p3 << endl;
	cout << "p4 : " << p4 << endl;
	cout << "*p3 : " << *p3 << endl;
	cout << "*p4 : " << *p4 << endl;

	delete p3;
	// delete p4;
	// why: �̹� p3���� p4�� ���� �ּҸ� ������ �ִٰ� ������ ������ �ѹ� �� ������� �ϸ� ������
	return 0;
}