/*
 * fun_point.h
 *
 *  Created on: 2013/6/20
 *      Author: AdamChen
 */

#ifndef FUN_POINT_H_
#define FUN_POINT_H_

class FunP {
public:
    FunP();
    ~FunP();
    void get_fun_point();
    void use_fun_point(int fun_num, int value);

    static void Class_point_0(int a);
    static void Class_point_1(int b);
    static void Class_point_2(int c);

private:
    typedef void(*EventVoid)(int);
    EventVoid M_process[3];
};


#endif /* FUN_POINT_H_ */
