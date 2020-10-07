#pragma once
#include<iostream>
#include"Base.h"

//template<typename T1,typename T2,class T3,class T4>
template<class T1, class T2, class T3, class T4>
class Child :public Base<T1, T2>
{
protected:
	T3 value3;
	T4 value4;
public:
	Child(T1 Val1, T2 Val2, T3 Val3 = 0, T4 Val4 = 0) : Base<T1, T2>(Val1, Val2)
	{

		value3 = Val3;
		value4 = Val4;

	}
	void Print()
	{
		Base<T1, T2>::Print();
		std::cout << "Value3= " << value3 << std::endl << "Value4= " << value4 << std::endl;
	}
};