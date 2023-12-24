#include "CMoney.h"
#include <cstdlib>

int CMoney::GetDollar() const {
    return m_nDollar;
}

void CMoney::SetDollar(int nDollar) {
    m_nDollar = nDollar;
}

int CMoney::GetCent() const {
    return m_nCent;
}

void CMoney::SetCent(int nCent) {
    m_nCent = nCent;
}


CMoney::CMoney(int nDollar, int nCent)
    :m_nDollar(nDollar), m_nCent(nCent) {}

CMoney::CMoney() {
    m_nDollar = 0;
    m_nCent = 0;
}

CMoney CMoney::operator+(const CMoney& amount) { // return type, Ŭ����::operator�����ڿ� ���ؼ� �����ϰڴ�
    int allCents1 = m_nCent + m_nDollar * 100; // �ϳ��� �ڱ��ڽ��̶�
    int allCents2 = amount.GetCent() + amount.GetDollar() * 100; //amount.m_nCent, m_nDollar�� ���� ����
    int sumAllCents = allCents1 + allCents2;
    int absAllCents = abs(sumAllCents);
    int finalDollors = absAllCents / 100;
    int finalCents = absAllCents % 100;

    if (sumAllCents < 0) {
        finalDollors = -finalDollors;
        finalCents = -finalCents;
    }
    return CMoney(finalDollors, finalCents); // return type�� CMoney �� Ŭ������������ �������ڴ�
}
