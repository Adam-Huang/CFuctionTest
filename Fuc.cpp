/*-------------------------------------------
���ļ�����һЩ���õĺ�����������һЩ�����㷨
---------------------------------------------
- ��������
| quickSort
*/
#include "stdafx.h"
#include "Fuc.h"
#include <iostream>


CAlgorithm::CAlgorithm()
{
	m_bShowDetail = 0;
}

CAlgorithm::~CAlgorithm()
{
	m_bShowDetail = 0;
}

int CAlgorithm::quickSort(int dwaSeq[], int dwSequeBegin, int dwSequeEnd)
{
	if (dwaSeq == NULL)
	{
		return ERROR_PARAM;
	}
	if (dwSequeBegin < dwSequeEnd)
	{
		int i = dwSequeBegin, j = dwSequeEnd, x = dwaSeq[dwSequeBegin];
		while (i < j)
		{
			while (i < j && dwaSeq[j] >= x) // ���������ҵ�һ��С��x����  
				j--;
			if (i < j)
				dwaSeq[i++] = dwaSeq[j];
			while (i < j && dwaSeq[i] < x) // ���������ҵ�һ�����ڵ���x����  
				i++;
			if (i < j)
				dwaSeq[j--] = dwaSeq[i];
		}
		dwaSeq[i] = x;
		
		if (m_bShowDetail)
		{
			int k = 0;
			for (k = 0; k < 10; k++)
				std::cout << dwaSeq[k] << "\t";
			std::cout << std::endl;
		}
		quickSort(dwaSeq, dwSequeBegin, i - 1); // �ݹ����  
		quickSort(dwaSeq, i + 1, dwSequeEnd);
	}
	return NOERROR;
}

void CAlgorithm::ShowDetail(int dwDetail)
{
	m_bShowDetail = dwDetail;
}

