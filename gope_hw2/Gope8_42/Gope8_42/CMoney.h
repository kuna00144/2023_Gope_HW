#pragma once
#include <iostream>
using namespace std;

class CMoney {
public:
    CMoney(); // �⺻ ������
    CMoney(int nDollar, int nCent);
    friend ostream & operator << (ostream & outputStream, const CMoney& aMoney);
    int GetDollar() const; // ��������� �ٲ��� �ʴ� ��� �Լ�
    void SetDollar(int nDollar);
    int GetCent() const; // ��� �Լ�
    void SetCent(int nCent);
private:
    int m_nDollar; // ��� ���� ����
    int m_nCent;
};