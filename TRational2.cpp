#include "TRational2.h"

TRational operator + (const TRational& d1, const TRational& d2) {
	return TRational(d1.a * d2.b + d1.b * d2.a, d1.b * d2.b);
}

TRational operator - (const TRational& d1, const TRational& d2) {
	return TRational(d1.a * d2.b - d1.b * d2.a, d1.b * d2.b);
}

TRational operator / (const TRational& d1, const TRational& d2) {
	return TRational(d1.a * d2.b, d1.b * d2.a);
}

TRational operator * (const TRational& d1, const TRational& d2) {
	return TRational(d1.a * d2.a, d1.b * d2.b);
}

TRational& TRational::operator*= (unsigned long long num) {
	a = a * num;
	b = b * 1;
	return *this;
}

TRational operator"" _xn(unsigned long long first) {
	TRational P(first, 2);

	return P;
}


std::ostream& operator << (std::ostream& out, const TRational& Rational) {
	out << Rational.a << "/" << Rational.b;
}
std::istream& operator >> (std::istream &in,  TRational& Rational) {
	char tmp;
	in >> Rational.a >> tmp >> Rational.b;

}

bool operator > (const TRational& d1,  const TRational& d2) {
	if (d1.a * d2.b > d1.b * d2.a) {

		return true;
	}
	return false;
}
 bool operator == (const TRational& d1, const TRational& d2) {
 	if (d1.a * d2.b == d1.b * d2.a) {
 		return true;
 	}
 	return false;
 }
 bool operator < (const TRational& d1, const TRational& d2) {
 	if (d1.a * d2.b < d1.b * d2.a) {
 		return true;
 	}
 	return false;
 }


TRational TRational::Add(const TRational &d1, const TRational &d2) const{
	TRational tmp;
	tmp = d1 + d2;
	tmp.Reduce();
	return tmp;
	 
	
}
TRational TRational::Div(const TRational &d1, const TRational &d2) const{
	TRational tmp;
	tmp = d1 / d2;
	tmp.Reduce();
	return tmp;
}
TRational TRational::Sub(const TRational &d1, const TRational &d2) const{
	TRational tmp;
	tmp = d1 - d2;
	tmp.Reduce();
	return tmp;
}
TRational TRational::Mul(const TRational &d1, const TRational &d2) const{
	TRational tmp;
	tmp = d1 * d2;
	tmp.Reduce();
	return tmp;
}

int TRational::Compare(const TRational &d1) const{
	if (this->b == 0) {
		return 2;
	} else if (d1.b == 0) {
		return 1;
	}
	if (*this > d1) {
		return 1;
	} else if (*this == d1) {
		return 0;
	} else {
		return 2;
	}
}


void TRational::Reduce(){
	int x = abs(this->a);
	int y = abs(this->b);
	if (x == 0 || y == 0) {
		return;
	}
	while (x != 0 && y != 0) {
		if (x > y) {
			x = x % y;
		} else {
			y = y % x;
		}	
	}
	this->a = this->a / (x + y);
	this->b = this->b / (x + y);
}

void TRational::Print() const{
	TRational tmp = *this;
	if (tmp.b == 0) {
		std::cout << " -nan\n";
		return;
	} else if (tmp.a == 0) {
		std::cout << " 0\n";
		return;
	} else if (tmp.a < 0 and tmp.b < 0) {
		tmp.a = (-1) * tmp.a;
		tmp.b = (-1) * tmp.b;
		std::cout << tmp << "\n";
		return;
	}
	std::cout << tmp << "\n";
}
