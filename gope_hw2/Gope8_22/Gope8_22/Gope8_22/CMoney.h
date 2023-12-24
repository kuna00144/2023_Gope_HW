#pragma once

class CMoney {
public:
	CMoney();
	CMoney(int nDollar, int nCent);
	int GetDollar() const; // ��������� �ٲ��� �ʴ� ��� �Լ�
	void SetDollar(int nDollar);
	int GetCent() const; // ��� �Լ�
	void SetCent(int nCent);
	CMoney operator +(const CMoney& amount); // �׷��� return type�� CMoney 
private:
	int m_nDollar;
	int m_nCent;
};