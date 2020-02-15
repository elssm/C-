#ifndef TEACHER_H
#define TEACHER_H
#include<iostream>

using namespace std;

/*
*用来演示私有继承的其中一种用法
*实现组合关系：
*Teacher类中拥有string类型的成员name
*/


class Teacher : private string
{
private:
    double salary;  //工资
    public:
        Teacher();
        Teacher(int _salary) : salary(_salary){}
        virtual ~Teacher();
        //string nickName;        //使用组合关系实现，比较简单 has - a

        //难点
        const string& GetName() const
        {
            /*
            *Teacher类是由string类私有派生而来，所以可以使用强制类型转换，将Teacher类型转换为string类型
            *为了避免调用构造函数创建新的对象，所以强制转换成了string的引用类型来返回
            *本方法返回一个引用，指向调用本方法的Teacher对象中继承而来的string对象
            */
            return (const string&)*this;
        }

        using string::length();//将字符串方法声明为本类的公有方法

        //返回当前教师对象姓名的字符串长度
        int GetLength()
        {
            return string::length();

        }

        double GetSalary(){return salary;}
        void SetSalary(double salary){this->salary = salary;}


};

#endif // TEACHER_H
