/*-------------------------------------------
���ļ�����һЩ���õĺ�����������һЩ�����㷨
---------------------------------------------
- ��������
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
	/*-���������㷨*/
	int quickSort(int dwaSeq[], int dwSequeBegin, int dwSequeEnd);
	void ShowDetail(int dwDetail);
private:
	int m_bShowDetail;
};







#endif


