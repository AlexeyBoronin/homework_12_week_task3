#include <iostream>
#include"Child2.h"
using namespace std;


	

	
int main()
{
	Base <int, int> b(5, 6);
	b.Print();
	cout << endl;
	Child <int, int, int, int> c(12,10, 7, 8);
	c.Print();
	cout << endl;
	Child2<int, int, int, int, int, int> e(1, 2, 3, 4, 5, 6);
	e.Print();
}