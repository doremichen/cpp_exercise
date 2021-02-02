//============================================================================
// Name        : FuncPointerCPP.cpp
// Author      : AdamChen
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "fun_point.h"
using namespace std;

int main() {

    FunP funpObj;

    funpObj.get_fun_point();
    funpObj.use_fun_point(2, 2);

    cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
    return 0;
}
