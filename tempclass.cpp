#include "stdafx.h"
#include "tempclass.h"

#include <iostream>



class TestStatic;

void TestStatic::addfuc()
{
	std::cout << s_dwCount << std::endl;
	s_dwCount++;
}



