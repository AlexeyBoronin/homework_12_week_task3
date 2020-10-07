#pragma once
#include<iostream>

//template <typename T1, typename T2>
template<class T1, class T2>
class Base
{
protected:
	T1 value1;
	T2 value2;
public:
	Base(T1 Val1 = 0, T2 Val2 = 0)
	{
		value1 = Val1;
		value2 = Val2;
	}
	void Print()
	{
		std::cout << "Value1= " << value1 << std::endl << "Value2= " << value2 << std::endl;
	}
};