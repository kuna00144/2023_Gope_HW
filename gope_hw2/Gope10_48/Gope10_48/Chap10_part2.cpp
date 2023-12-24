#include <iostream>
using namespace std;
#include "CDyna.h"
int main() {
    cout << "20201599 �̰Ǿ�" << endl;
    CDyna* pDyna;
    pDyna = new CDyna;  // CDyna Ŭ������ �ν��Ͻ��� �������� �����Ͽ� �����Ϳ� �����մϴ�.

    int sche[3] = { 1, 2, 3 };  // ���� �迭 arr�� �ʱ�ȭ�մϴ�.
    pDyna->SetInfo(3, sche);  // CDyna Ŭ������ SetInfo �Լ��� ȣ���Ͽ� �迭 ũ��� ������ �����մϴ�.
    pDyna->ShowSchedule();  // CDyna Ŭ������ ShowSchedule �Լ��� ȣ���Ͽ� �������� ����մϴ�.

    CDyna anotherDyna;  // CDyna Ŭ������ �� �ٸ� �ν��Ͻ��� �����մϴ�.
    anotherDyna = *pDyna;  // ���� �����ڸ� ����Ͽ� cd �ν��Ͻ��� ������ anotherDyna �ν��Ͻ��� �����մϴ�.

    anotherDyna.ShowSchedule();  // ����� �������� ����մϴ�.
    delete pDyna;  // �������� ������ �ν��Ͻ��� �����մϴ�.
    return 0;
}

CDyna& CDyna::operator=(const CDyna& rtSide)
{
    if (this == &rtSide) {  // ���� �����ڸ� ����� ��, �ڱ� �ڽŰ� ���ԵǴ� ��ü�� ������ Ȯ���մϴ�.
        return *this;  // ���ٸ� ���� ��ü�� �״�� ��ȯ�մϴ�.
    }
    else {
        m_nSize = rtSide.m_nSize;  // ���ԵǴ� ��ü�� ũ�⸦ ���� ��ü�� �����մϴ�.
        if (m_pnSchedule != NULL) {  // ���� ��ü�� �������� NULL�� �ƴ϶��
            delete[] m_pnSchedule;  // �������� �Ҵ��� �޸𸮸� �����մϴ�.
        }
        m_pnSchedule = new int[m_nSize];  // ���ԵǴ� ��ü�� ũ�⸸ŭ ���ο� �޸𸮸� �Ҵ��մϴ�.
        for (int nIndex = 0; nIndex < m_nSize; nIndex++) {
            m_pnSchedule[nIndex] = rtSide.m_pnSchedule[nIndex];  // ���ԵǴ� ��ü�� �������� ���� ��ü�� �����մϴ�.
        }
    }
    return *this;  // ���� ��ü�� ��ȯ�մϴ�.
}