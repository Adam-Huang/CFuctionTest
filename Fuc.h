/*-------------------------------------------
此文件定义一些常用的函数，包括了一些经典算法
---------------------------------------------
- 快速排序
  | quickSort
*/
#ifndef _FUC_H_
#define _FUC_H_

#define ERROR_PARAM 10000
#define NOERROR     0

class CAlgorithm
{
public:
	CAlgorithm();
	~CAlgorithm();
	/*-快速排序算法*/
	int quickSort(int dwaSeq[], int dwSequeBegin, int dwSequeEnd);
	void ShowDetail(int dwDetail);
private:
	int m_bShowDetail;
};







#endif


