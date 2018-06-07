/*-------------------------------------------
此文件定义一些常用的函数，包括了一些经典算法
---------------------------------------------
- 快速排序
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
			while (i < j && dwaSeq[j] >= x) // 从右向左找第一个小于x的数  
				j--;
			if (i < j)
				dwaSeq[i++] = dwaSeq[j];
			while (i < j && dwaSeq[i] < x) // 从左向右找第一个大于等于x的数  
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
		quickSort(dwaSeq, dwSequeBegin, i - 1); // 递归调用  
		quickSort(dwaSeq, i + 1, dwSequeEnd);
	}
	return NOERROR;
}

void CAlgorithm::ShowDetail(int dwDetail)
{
	m_bShowDetail = dwDetail;
}

