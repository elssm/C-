#include "Integer.h"
#include<iostream>

using namespace std;


//调用默认构造时，会为私有m_value赋一个默认值为0
Integer::Integer() : m_value(0)
{
    //ctor
}


 const Integer Integer::operator+(const Integer & other) const
{
    cout << "use  function overload + operator, make int and Integer " <<endl;
    Integer result(this->m_value+other.m_value);        //用来返回的结果对象
    return result;
}

const Integer Integer::operator-(const Integer & other) const
{
     Integer result(this->m_value-other.m_value);        //用来返回的结果对象
    return result;
}

const Integer Integer::operator*(const Integer & other) const
{
    return Integer(this->m_value * other.m_value);
}

const Integer Integer::operator/(const Integer & other) const
{
    return Integer(this->m_value / other.m_value);
}

const Integer Integer::operator%(const Integer & other) const
{
    return Integer(this->m_value % other.m_value);
}

const Integer  Integer::operator=(const Integer& other)
{
    this->m_value = other.m_value;
    return *this;
}

//友元函数不需要使用域运算符
const Integer operator+(int IntValue , const Integer & other)
{
    cout << "use frend function overload + operator, make int and Integer " <<endl;
    return Integer(IntValue + other.m_value);
}

 //流运算符一般只能呢使用友元的方式重载
ostream & operator<<(ostream & out, const Integer & num)
{
  out <<num.m_value;
  return   out;
}

istream & operator>>(istream & in , Integer & num)
{
    cout << "please input a number : ";
    in >> num.m_value;
    return in;
}

Integer::~Integer()
{
    //dtor
}
