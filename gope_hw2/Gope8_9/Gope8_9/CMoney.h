#pragma once

class CMoney {
private:
    int m_nDollar; // ��� ���� ����
    int m_nCent;
public:
    CMoney(); // �⺻ ������
    CMoney(int nDollar, int nCent);

    int GetDollar() const; // ��������� �ٲ��� �ʴ� ��� �Լ�
    void SetDollar(int nDollar);
    int GetCent() const; // ��� �Լ�
    void SetCent(int nCent);
};