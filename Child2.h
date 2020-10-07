#pragma once
#include<iostream>
#include"Child.h"

//template<typename T3, typename T4,typename T5,typename T6>
template<class T1, class T2, class T3, class T4, class T5, class T6>
class Child2 :public Base<T1, T2>,public Child<T1, T2, T3, T4>
{
	T5 value5;
	T6 value6;
public:
	Child2(T1 Val1, T2 Val2, T3 Val3, T4 Val4, T5 Val5 = 0, T6 Val6 = 0) :Base<T1, T2>(Val1, Val2),Child<T1, T2, T3, T4>(Val3, Val4)
	{
		value5 = Val5;
		value6 = Val6;
	}
	void Print()
	{
		Child<T1, T2, T3, T4>::Print();
		std::cout << "Value5= " << value5 << std::endl << "Value6= " << value6 << std::endl;

	}
};
