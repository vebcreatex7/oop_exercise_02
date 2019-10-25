#ifndef _CLASS_H_
#define _CLASS_H_
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <cstddef>
#include <cstdio>

class TRational {
private:
	int a;
	int b;
public:
	TRational() {
		a = 0;
		b = 0;
	}
	TRational(int a, int b) : a(a), b(b) {}
	friend TRational operator + (const TRational& , const TRational& );
	friend TRational operator - (const TRational& , const TRational& );
	friend TRational operator / (const TRational& , const TRational& );
	friend TRational operator * (const TRational& , const TRational& );
	friend bool operator > (const TRational& , const TRational& );
	friend bool operator == (const TRational& , const TRational& );
	friend bool operator < (const TRational& , const TRational& );
	friend std::ostream& operator << (std::ostream& out, const TRational& Rational);
	friend std::istream& operator >> (std::istream &in, TRational& Rational);
	
	TRational& operator *= (unsigned long long num);
	TRational Add(const TRational &d1, const TRational &d2) const;
	TRational Div(const TRational &d1, const TRational &d2) const;
	TRational Sub(const TRational &d1, const TRational &d2) const;
	TRational Mul(const TRational &d1, const TRational &d2) const;
	int Compare(const TRational &d1);
	void Reduce();
	void Print();

};
TRational operator ""_xn (unsigned long long first);
	


#endif