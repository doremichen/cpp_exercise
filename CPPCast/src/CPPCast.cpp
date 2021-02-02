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
//	pAderive = static_cast<Aderive *>(pAbase);   //OK, 向下轉型, 但不安全, 因為pAbase只有指向基類物件, 無法代表整個衍生物件.
//	pAbase = static_cast<Abase *>(pAderive);    //OK, 向上轉型.
//	pAbase = static_cast<Abase *>(pBbase);   //無效, 因為class Abase和class Bbase無關

	//dynamic cast
//    i_value = dynamic_cast<int>(d_value);   //無效, 因為i_value跟d_value非是指標型態, 也無法動態轉型
//	pAderive = dynamic_cast<Aderive *>(pAbase);   //無效, 向下轉型 因為Bbase型態非是polymorphic.
//	pAbase = dynamic_cast<Abase *>(pAderive);   //無效, 向上轉型 因為Aderive型態非是polymorphic.
//	pApolyBase = dynamic_cast<ApolyBase *>(pApolyDerive);  //ok , 向上轉型.
//	pApolyDerive = dynamic_cast<ApolyDerive *>(pApolyBase); //ok, 想下轉型. pApolyDerive = 0, 動態轉型會幫忙做型別檢查, 若發現指標所指的物件是屬於基礎類別在轉型之後會回傳0.
//	pAbase = dynamic_cast<Abase *>(pBbase);  //無效, 因為class Abase和class Bbase無關

	//const cast
//	const Abase *pCA = new Abase;
//	Abase *pA = NULL;
//	const int const_Value = 3;
//	int Value = const_cast<int>(const_Value); //無效, 因為轉換不是資料型態的指標
//	int *pValue = const_cast<int *>(&const_Value);  //OK
//
//	pA = pCA;    //指向const 物件的指標無法指定給指向非const 物件的指標.
//
//	pA = const_cast<Abase *>(pA);  //ok 利用const_cast取消const屬性使其指向Const物件的指標可以指定給指向非const物件的指標.

	//reinterpret cast
//	pAbase = reinterpret_cast<Abase *>(pBbase);  //ok, reinterpret_cast用來轉型任何資料型態的指標, 但由於不會作型別檢查, 所以是個不安全的用法.
//	i_value = reinterpret_cast<int>(d_value);    //無效, reinterpret_cast只能用來轉行指標的資料型態.
//	int *pI_value = reinterpret_cast<int *>(&d_value);  //ok






//	cout << i_value << endl;

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
