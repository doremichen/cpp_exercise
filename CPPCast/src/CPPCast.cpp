//============================================================================
// Name        : CPPCast.cpp
// Author      : Doremi
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "abase.h"
#include "aderive.h"
#include "bbase.h"
#include "apolybase.h"
#include "apolyderive.h"
using namespace std;

int main() {

	double d_value = 3.2;
	int i_value = 0;
	Abase *pAbase = NULL;
	Bbase *pBbase = NULL;
	Aderive *pAderive = NULL;
	ApolyBase *pApolyBase = NULL;
	ApolyDerive *pApolyDerive = NULL;
	Abase Ab;
	Aderive Ad;



	pAbase = new Abase;
	pBbase = new Bbase;
	pAderive = new Aderive;
	pApolyBase = new ApolyBase;
	pApolyDerive = new ApolyDerive;

	//static_cast
	Ab = static_cast<Abase>(Ad);
//	i_value = static_cast<int>(d_value);     //Ok
//	pAderive = static_cast<Aderive *>(pAbase);   //OK, �V�U�૬, �����w��, �]��pAbase�u�����V��������, �L�k�N���ӭl�ͪ���.
//	pAbase = static_cast<Abase *>(pAderive);    //OK, �V�W�૬.
//	pAbase = static_cast<Abase *>(pBbase);   //�L��, �]��class Abase�Mclass Bbase�L��

	//dynamic cast
//    i_value = dynamic_cast<int>(d_value);   //�L��, �]��i_value��d_value�D�O���Ы��A, �]�L�k�ʺA�૬
//	pAderive = dynamic_cast<Aderive *>(pAbase);   //�L��, �V�U�૬ �]��Bbase���A�D�Opolymorphic.
//	pAbase = dynamic_cast<Abase *>(pAderive);   //�L��, �V�W�૬ �]��Aderive���A�D�Opolymorphic.
//	pApolyBase = dynamic_cast<ApolyBase *>(pApolyDerive);  //ok , �V�W�૬.
//	pApolyDerive = dynamic_cast<ApolyDerive *>(pApolyBase); //ok, �Q�U�૬. pApolyDerive = 0, �ʺA�૬�|���������O�ˬd, �Y�o�{���Щҫ�������O�ݩ��¦���O�b�૬����|�^��0.
//	pAbase = dynamic_cast<Abase *>(pBbase);  //�L��, �]��class Abase�Mclass Bbase�L��

	//const cast
//	const Abase *pCA = new Abase;
//	Abase *pA = NULL;
//	const int const_Value = 3;
//	int Value = const_cast<int>(const_Value); //�L��, �]���ഫ���O��ƫ��A������
//	int *pValue = const_cast<int *>(&const_Value);  //OK
//
//	pA = pCA;    //���Vconst ���󪺫��еL�k���w�����V�Dconst ���󪺫���.
//
//	pA = const_cast<Abase *>(pA);  //ok �Q��const_cast����const�ݩʨϨ���VConst���󪺫��Хi�H���w�����V�Dconst���󪺫���.

	//reinterpret cast
//	pAbase = reinterpret_cast<Abase *>(pBbase);  //ok, reinterpret_cast�Ψ��૬�����ƫ��A������, ���ѩ󤣷|�@���O�ˬd, �ҥH�O�Ӥ��w�����Ϊk.
//	i_value = reinterpret_cast<int>(d_value);    //�L��, reinterpret_cast�u��Ψ������Ъ���ƫ��A.
//	int *pI_value = reinterpret_cast<int *>(&d_value);  //ok






//	cout << i_value << endl;

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
