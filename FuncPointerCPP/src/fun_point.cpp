/*
 * fun_point.cpp
 *
 *  Created on: 2013/6/20
 *      Author: AdamChen
 */
#include "fun_point.h"
#include <iostream>

using namespace std;

FunP::FunP()
{

}

FunP::~FunP()
{

}

void FunP::get_fun_point()
{
    this->M_process[0] = &FunP::Class_point_0;
    this->M_process[1] = &FunP::Class_point_1;
    this->M_process[2] = &FunP::Class_point_2;
}

void FunP::use_fun_point(int fun_num, int value)
{

    if(fun_num > 3)
    {
        cout << "no this function" << endl;
        return;
    }

    M_process[fun_num](value);
}

void FunP::Class_point_0(int a)
{
    cout << "Class_point_0 is called..." << endl;
}

void FunP::Class_point_1(int b)
{
    cout << "Class_point_1 is called..." << endl;
}

void FunP::Class_point_2(int c)
{
    cout << "Class_point_2 is called..." << endl;
}
