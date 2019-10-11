#include "TRational2.h"

TRational::TRational(int m_a, int m_b) : a(m_a), b(m_b) {}

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


bool operator > (const TRational& d1, const TRational& d2) {
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

void TRational::Add(const TRational &d1, const TRational &d2) {
	*this = d1 + d2;
	this->Reduce();
}
void TRational::Div(const TRational &d1, const TRational &d2) {
	*this = d1 / d2;
	this->Reduce();
}
void TRational::Sub(const TRational &d1, const TRational &d2) {
	*this = d1 - d2;
	this->Reduce();
}
void TRational::Mul(const TRational &d1, const TRational &d2) {
	*this = d1 * d2;
	this->Reduce();
}

void TRational::Compare(const TRational &d1) {
	if (*this > d1) {
		std::cout << this->a << "/" << this->b << " > " << d1.a << "/" << d1.b << "\n";
		return;
	} else if (*this == d1) {
		std::cout << this->a << "/" << this->b << " == " << d1.a << "/" << d1.b << "\n";
		return;
	}
	std::cout << this->a << "/" << this->b << " < " << d1.a << "/" << d1.b << "\n";
}


void TRational::Reduce() {
	int x = abs(a);
	int y = abs(b);
	if (x == 0 || y == 0) {
		std::cout << 0 <<"\n";
		return;
	}
	while (x != y) {
		if (x < y) {
			y -= x;
		} else {
			x -= y;
		}	
	}
	std::cout << a/x << "/" << b/x << "\n";
}
