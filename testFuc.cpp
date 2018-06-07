// testFuc.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include "iostream"
#include "tempclass.h" //������������
#include "StructTest.h"
#include "Fuc.h"

class Myclass
{
public:
	Myclass(int a, int b, int c);
	static void GetSum();
private:
	int a, b, c;
	static int Sum;//������̬���ݳ�Ա
};

int Myclass::Sum = 0;//���岢��ʼ����̬���ݳ�Ա��һ��һ��Ҫ��������һ�£���Ȼ���
Myclass::Myclass(int a, int b, int c)
{
	this->a = a;
	this->b = b;
	this->c = c;
	Sum += a + b + c;
}
void Myclass::GetSum()
{
	std::cout << "Sum=" << Sum << std::endl;
}

/*�������� - ��̬��Ա*/
void addfu()
{
	static int dwCount = 10;
	std::cout << dwCount << std::endl;
	dwCount++;
}


/*�������� - �ṹ��̳й����е��ڴ�����*/
void Test_StructInerit()
{
	TBase tTemp;
	std::cout << _MSC_VER << sizeof(tTemp) << '\t' << sizeof(TBase) << std::endl;
	std::cout << &tTemp << '\t' << &tTemp.s32Count << std::endl;
	std::cout << &tTemp.byNone << '\t' << &tTemp.bYes << std::endl;
	std::cout << &tTemp.dwTemp << '\t' << &tTemp.bYes << std::endl;
	Tinherit2 *tpTemp = new Tinherit2;
	std::cout << sizeof(tpTemp) << '\t' << sizeof(Tinherit2) << std::endl;
	std::cout << tpTemp << '\t' << &(tpTemp->s32Count) << std::endl;
	std::cout << (unsigned int)&(tpTemp->byNone) << '\t' << &(tpTemp->bYes) << std::endl;
	std::cout << &(tpTemp->dwTemp) << '\t' << (unsigned int)&(tpTemp->byIyes) << '\t' << &(tpTemp->dwItemp) << std::endl;
	delete tpTemp;
	tpTemp = NULL;
}

/*�������� - ���������㷨*/
int Test_QuickSort()
{
	CAlgorithm *pAltmObj = new CAlgorithm;
	int array[] = { 34, 65, 12, 43, 67, 5, 78, 10, 3, 70, 44, 32, 12 }, k;
	int len = sizeof(array) / sizeof(int);
	std::cout << "The orginal arrayare:" << std::endl;
	for (k = 0; k < len; k++)
		std::cout << array[k] << "\t";
	std::cout << std::endl;
	pAltmObj->quickSort(array, 0, len - 1);
	std::cout << "The sorted arrayare:" << std::endl;
	for (k = 0; k < len; k++)
		std::cout << array[k] << "\t";
	std::cout << std::endl;
	system("pause");
	delete pAltmObj; 
	return 0;
}

#ifndef _LINUX_ENV_

int _tmain(int argc, _TCHAR* argv[])
{
	Test_QuickSort();
	return 0;
}
#endif




