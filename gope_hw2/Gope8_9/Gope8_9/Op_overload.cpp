#include <iostream>
#include <cmath>
#include <ctime>
#include <string>
#include "CMoney.h"
using namespace std;
const CMoney operator+(const CMoney& amount1, const CMoney& amount2);

int main()
{
    cout << "20201599 �̰Ǿ�" << endl;
    CMoney aMoney(14, 23), bMoney(7, 84), sumMoney; // aMoney -> amount1, bMoney -> amount2
    sumMoney = aMoney + bMoney; // �̰� ������ sumMoney = +(aMoney, bMoney) ó�� operator�����̶� ���Ƽ� �Ʒ����� ������ return ���� sumMoney�� ����Ǵ°�
    cout << "total $" << sumMoney.GetDollar() << "." << sumMoney.GetCent() << endl;
}

// const�� return type �տ� ���� ���� : ���� �����ϰ� return�� ���� �����ϰڴ�
const CMoney operator+(const CMoney& amount1, const CMoney& amount2) // amount1, 2�� ���� ���� �ٲ��� �ʰڴٴ� ������ const ��
{
    int allCents1 = amount1.GetCent() + amount1.GetDollar() * 100;
    int allCents2 = amount2.GetCent() + amount2.GetDollar() * 100;
    int sumAllCents = allCents1 + allCents2;

    int absAllCents = abs(sumAllCents);
    int finalDollars = absAllCents / 100; // ������ ������
    int finalCents = absAllCents % 100;   // ������ ������
        
    if (sumAllCents < 0) {
        finalDollars = -finalDollars;
        finalCents = -finalCents;
    }

    return CMoney(finalDollars, finalCents);
}