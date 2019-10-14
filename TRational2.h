#ifndef _CLASS_H_
#define _CLASS_H_
#include <iostream>
#include <cstdlib>
#include <math.h>

class TRational {
private:
	int a;
	int b;
public:
	TRational() {}
	TRational(int m_a, int m_b);
	friend TRational operator + (const TRational& , const TRational& );
	friend TRational operator - (const TRational& , const TRational& );
	friend TRational operator / (const TRational& , const TRational& );
	friend TRational operator * (const TRational& , const TRational& );
	friend bool operator > (const TRational& , const TRational& );
	friend bool operator == (const TRational& , const TRational& );
	friend bool operator < (const TRational& , const TRational& );
	friend std::ostream& operator << (std::ostream& out, const TRational& Rational);
	friend std::istream& operator >> (std::istream &in, TRational& Rational);
	TRational Add(const TRational &d1, const TRational &d2) const;
	TRational Div(const TRational &d1, const TRational &d2) const;
	TRational Sub(const TRational &d1, const TRational &d2) const;
	TRational Mul(const TRational &d1, const TRational &d2) const;
	int Compare(const TRational &d1);
	void Reduce();
	void Print();
	

};

#endif