#pragma once

class CMoney {
private:
    int m_nDollar; // ��� ���� ����
    int m_nCent;

public:
    CMoney(); // �⺻ ������
    CMoney(int nDollar, int nCent);
    friend const CMoney operator+(const CMoney& amount1, const CMoney& amount2);
    int GetDollar() const; // ��������� �ٲ��� �ʴ� ��� �Լ�
    void SetDollar(int nDollar);
    int GetCent() const; // ��� �Լ�
    void SetCent(int nCent);
};