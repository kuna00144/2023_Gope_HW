 #include <iostream>
using namespace std;

int main() {
	cout << "20201599 �̰Ǿ�" << endl;
	int* p1, * p2, v1 = 3, v2 = 4;
	p1 = 0;
	cout << p1 << endl; // p1�� �ּ�
	cout << &v1 << endl;  // v1�� �ּҰ�
	
	p1 = &v1;
	cout << p1 << endl; // v1�� �ּҸ� �����ؿͼ� v1�� �ּҰ� ����
	cout << *p1 << endl; // v1�� ���� ����

	p2 = &v2; // v2�� �ּҸ� �����ؿ�
	*p1 = *p2; // p1�� �� 3�� p2�� v2���� �����°� 4�� �����
	cout << p1 << "," << p2 << "," << *p1 << "," << *p2 << endl;
	p1 = p2;
	cout << p1 << "," << p2 << "," << *p1 << "," << *p2 << endl;

	return 0;
}