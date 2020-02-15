#include <iostream>
#include"Integer.h"
#include"ConstDemo.h"

using namespace std;

void TestInteger();

int main()
{
    TestInteger();
    //cout << "Hello world!" << endl;
    //constDemo1();
    return 0;
}

void TestInteger()
{
   // int num1 = 111;
    //int num2 = 222;
    //int num3;
    //num3 = num1+ num2;
    //思考：运算完毕后，num1和num2的值有没有变化？

    Integer int1(1024),int2(2048),int3;
    int3 = int1 + int2;
    cout << " the result of the int3 = int1 + int2 is :" << int3.IntValue() <<endl;

    int3 = int1 - int2;
    cout << " the result of the int3 = int1 - int2 is :" << int3.IntValue() <<endl;

    int3 = int1 * int2;
    cout << " the result of the int3 = int1 * int2 is :" << int3.IntValue() <<endl;

    int3 = int1 / int2;
    cout << " the result of the int3 = int1 / int2 is :" << int3.IntValue() <<endl;

    int3 = int1 % int2;
    cout << " the result of the int3 = int1 % int2 is :" << int3.IntValue() <<endl;

    Integer int4;
    int4 = int3;
    cout << " the result of the int4 = int3 is :" << int4.IntValue() <<endl;


    Integer int5;
    int5 = 1024 + int4;   //错误，使用友元函数实现
    //int5 = int4 + 1024;   //使用正常函数

    cout << "int5 = " << int5.IntValue() << endl;

    cout << "after overloading the << operator, can print the object directly : int5 = : " <<int5 <<endl;   //直接打印

    Integer int6;
    cin >> int6;
    cout  << "the input number int6 is : " <<int6 << endl;
}
