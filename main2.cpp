#include "TRational2.h"
#include <sstream>
#include <iostream>
#include <cmath>



int main()
{
	TRational d1, d2, c;
	std::cin >> d1 >> d2;
	std::cout << "Add = ";
	(d1.Add(d1, d2)).Print();
	std::cout << "Sub = ";
	(d1.Sub(d1, d2)).Print();
	std::cout << "Div = ";
	(d1.Mul(d1, d2)).Print();
	std::cout << "Mul = ";
	(d1.Div(d1, d2)).Print();
	if (d1.Compare(d2) == 1) {
		std::cout << d1 << " > " << d2 << "\n";
	} else if (d1.Compare(d2) == 0) {
		std::cout << d1 << " = " << d2 << "\n";
	} else if (d1.Compare(d2) == 2) {
		std::cout << d1 << " < " << d2 << "\n";
	}
	c = 3_xn;

	std::cout << c;
	


}
