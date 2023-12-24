#include <iostream>
#include <fstream>
using namespace std;

int main() {
	ifstream inStream;
	ofstream outStream;

	inStream.open("infile.txt");
	if (inStream.fail()) {
		cout << "���� ���⿡ �����Ͽ����ϴ�." << endl;
		exit(1);
	}
	outStream.open("outfile.txt");

	const int nSizeMax = 100;
	int nSize = 0, sum = 0;
	int* pnData = new int[nSizeMax];
	while (nSize < nSizeMax && inStream >> pnData[nSize]) {
		sum = sum + pnData[nSize];
		nSize++;
	}
	
	outStream << "20201599 �̰Ǿ�\n" << "������ �� : " << nSize << endl;
	outStream << "infile.txt ���Ͽ����� sum �� : " << sum << endl;

	delete[] pnData;
	inStream.close();
	outStream.close();

	return 0;
}