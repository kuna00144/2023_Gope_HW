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
	outStream.open("outfile.txt", ios::app);

	int first, second, third;
	inStream >> first >> second >> third;
	outStream << "20201599 �̰Ǿ�\n"
		<< "The sum of the first 3\n" << "numbers in infile.txt\n" << "is" << (first + second + third) << endl;

	inStream.close();
	outStream.close();

	return 0;
}