#include "CDyna.h"
#include <iostream>
using namespace std;
namespace Gal {
    CDyna::CDyna() {
        m_nSize = 0;
        m_pnSchedule = NULL;
    }
    CDyna::~CDyna() {
        if (m_pnSchedule != NULL) {
            delete[] m_pnSchedule;  // �������� �Ҵ��� �޸𸮸� �����մϴ�.
        }
    }

    void CDyna::ShowSchedule() {
        if (m_pnSchedule == NULL) {
            cout << "NULL..." << endl;  // �������� NULL�� ��� "NULL..."�� ����մϴ�.
        }
        else {
            for (int i = 0; i < m_nSize; i++) {
                cout << m_pnSchedule[i] << " ";  // �������� ������ ����մϴ�.
            }
            cout << endl;
        }
    }

    void CDyna::SetInfo(int nSize, int* pSch) {
        m_nSize = nSize;  // �������� ũ�⸦ �����մϴ�.
        if (m_pnSchedule != NULL) {
            delete[] m_pnSchedule;  // �������� �Ҵ��� ������ �������� �����մϴ�.
        }
        m_pnSchedule = new int[nSize];  // �������� ũ�⸸ŭ ���ο� �޸𸮸� �Ҵ��մϴ�.
        for (int i = 0; i < nSize; i++) {
            m_pnSchedule[i] = pSch[i];  // �־��� �迭�� ������ �����ٷ� �����մϴ�.
        }
    }
}

