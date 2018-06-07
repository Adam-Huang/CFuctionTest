#ifndef _STRUCTTEST_H_
#define _STRUCTTEST_H_

/*---------------------------------------------------------------------------------
tag_Base结构体的大小是4+4+4 以一次实验举例如下：
0x00A6FE74 |0x64 0x00 0x00 0x00   ##大端还是小端看的出来哦，
0x00A6FE78 |0x59 0x01 0xcc 0xcc   ##第二个4字节，先存char然后在存的bool
0x00A6FE7C|0xc8 0x00 0x00 0x00
---------------------------------------------------------------------------------*/
typedef struct tag_Base
{
	int s32Count;
	char byNone;
	bool bYes;
	long dwTemp;
	tag_Base()/*这样添加构造函数真的有用！另外构造函数没有返回类型，连void都没有！*/
	{
		s32Count = 100;
		byNone = 'Y';
		bYes = true;
		dwTemp = 200;
		printf("Base has been created!\n");
	};
}TBase;

/*---------------------------------------------------------------------------------
tag_Base2几乎与TBase一样，只是顺序有点变动，所以占的字节数也就不同了（4+4+4+4）
0x0013F060 |0x64 0x00 0x00 0x00   
0x0013F064 |0x59 0xcd 0xcd 0xcd   
0x0013F068 |0xc8 0x00 0x00 0x00
0x0013F06C |0x01 0xcd 0xcd 0xcd   
---------------------------------------------------------------------------------*/
typedef struct tag_Base2
{
	int s32Count;
	char byNone;
	long dwTemp;
	bool bYes;
	tag_Base2()
	{
		s32Count = 100;
		byNone = 'Y';
		bYes = true;
		dwTemp = 200;
		printf("Base2 has been created!\n");
	};
}TBase2;

/*-------------------------------------------------------------------------以下涉及继承------------------------------------------------------------------------*/
/*（4+4+4+4+4）
0x0111DAB8 |0x64 0x00 0x00 0x00  （int）
0x0111DABC |0x59 0x01 0xcd 0xcd （char）（0x0111DABD|bool）
0x0111DAC0 |0xc8 0x00 0x00 0x00  （long）
0x0111DAC4 |0x30 0xcd 0xcd 0xcd （char）
0x0111DAC8 |0xff 0x03 0xcd 0xcd   （int） 
*/
typedef struct tag_InheritBase : public TBase
{
	char byIyes;
	int dwItemp;
	tag_InheritBase()/*构造函数的调用和类的继承一个样*/
	{
		byIyes = '0';
		dwItemp = 1023;
		printf("Tinherit has been created!\n");
	}
}Tinherit;

/*（4+4+4+4+4+4）
0x00ABDAD0 |0x64 0x00 0x00 0x00  （int）
0x00ABDAD4 |0x59 0xcd 0xcd 0xcd  （char）
0x00ABDAD8 |0xc8 0x00 0x00 0x00  （long）
0x00ABDADC |0x01 0xcd 0xcd 0xcd  （bool）
0x00ABDAE0 |0x30 0xcd 0xcd 0xcd  （char）
0x00ABDAE4 |0xff 0x03 0xcd 0xcd  （int）
*/
typedef struct tag_InheritBase2 : public TBase2
{
	char byIyes;
	int dwItemp;
	tag_InheritBase2()/*构造函数的调用和类的继承一个样*/
	{
		byIyes = '0';
		dwItemp = 1023;
		printf("Tinherit has been created!\n");
	}
}Tinherit2;

#endif // !_STRUCTTEST_H_
