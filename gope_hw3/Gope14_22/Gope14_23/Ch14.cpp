#include <iostream>
#include "employee.h"
#include "hourlyemployee.h"
#include "salariedemployee.h"
using namespace std;
using namespace SavitchEmployees;
int main() {
	cout << "20201599 �̰Ǿ�" << endl;
	HourlyEmployee hourMoney("�̰Ǿ�", "010907-1233111", 12000, 18);
	SalariedEmployee weekMoney("GunALee", "010907-1233111", 36);

	hourMoney.printCheck();
	weekMoney.printCheck();
	return 0;
}